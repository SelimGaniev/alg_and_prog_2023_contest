#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n;
	int m;
	int take;
	cin >> n;
	vector <int> first;
	for (int i = 0; i < n; i++)
	{
		cin >> take;
		first.push_back(take);
	}
	cin >> m;
	vector <int> second;
	for (int i = 0; i < m; i++)
	{
		cin >> take;
		second.push_back(take);
	}
	vector<int>ansver;
	for (int i = 0; i < n; i++)
	{
		ansver.push_back(first[i]);
	}
	for (int i = 0; i < m; i++) {
		ansver.push_back(second[i]);
	}


	sort(ansver.begin(), ansver.end());

	for (int i = 0; i < ansver.size(); i++)
	{
		cout << ansver[i] << ' ';
	}



}
