#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

int main()
{
	int n;
	char ansv = 0;
	float i;
	cin >> n;
	string obr;
	float costil;

	while (n > 0)
	{
		i = (n-1) % 26;
	
		n = (n-1) / 26;

	
		
			ansv = i + 65;
		
		
				obr = obr + ansv;
			
	}
	reverse(obr.begin(), obr.end());
	cout << obr;

	return 0;
}