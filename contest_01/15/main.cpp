#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string n;
	int mem = 0;


	int c = 0;
	char alph[26]{ 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	int ansv[26]{};
	cin >> n;
	for (int i = 0; i < size(n); i++)
	{
		
		for (int z = 0; z < 26; z++)
		{
			if (n[i] == alph[z]) {

				c++;
				mem = z;
			}
		}

		if (n[i] != n[i+1]) {
			cout << alph[mem];
			if (c > 1)
			{
				cout << c; 
			}
			c = 0;
			mem=0;
	}
	}
	
	
	





	return 0;
}