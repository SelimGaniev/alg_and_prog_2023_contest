#include<iostream>
#include<string>
#include<map>

int main() {
	int n;
	std::cin >> n;

	std::map<std::string,int> balik;
	std::string login;
	int balance;
	for (int i = 0; i < n; ++i) {
		std::cin.ignore();
		std::getline(std::cin, login, ';');
		std::cin >> balance;
		balik[login] = balance;
	}

	int m;
	std::cin >> m;

	for (int i = 0; i < m; ++i) {
		std::cin >> login;
		std::cout << balik[login] << " ";
	}
}