#include<iostream>
#include<string>
#include<set>
using namespace std;
int main() {
	int n, m;
	string take;
	cin >> n;
	set<string> first;
	for (int i = 0; i < n; i++) {
		cin >> take;
		first.insert(take);
	}
	cin >> m;
	set<string> second;
	for (int i = 0; i < m; i++) {
		cin >> take;
		second.insert(take);
	}
	set<string> ansver;
	for (const string& s : first) {
		if (second.count(s) > 0) {
			ansver.insert(s);
		}
	}
	if (ansver.empty()) {
		cout << -1;
	}
	else {
		for (const string& s : ansver) {
			cout << s << " ";
		}
	}
	return 0;
}