#include <iostream>
#include <fstream>
#include "json.hpp"
using json = nlohmann::json;

int main()
{
    int n;
    std::cin >> n;
	int count = 0;
    std::ifstream i("data.json");
    json data = json::parse(i);
    for (auto& element : data) {
        for (auto& task : element["tasks"]) {
            if (task["completed"] && task["user_id"] == n) {
                count++;
            }
        }
    }
    std::cout << count;
        
}