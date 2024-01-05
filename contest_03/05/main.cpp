#include <iostream>
#include<string>
#include <map>
using namespace std;
int main() {
	int n;
	map<string, int>words;
	string key;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> key;
		words[key]++;
	}
	int maxVal = 0;
	for (const auto& pair : words) {
		if (pair.second > maxVal) {
			maxVal = pair.second;
		}
	}
	for (const auto& pair : words) {
		if (pair.second == maxVal) {
			std::cout << pair.first<<' ';
		}
	}
}