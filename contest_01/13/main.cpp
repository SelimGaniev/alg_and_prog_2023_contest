#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	bool more = true;
	int max = 2;
	int curret = 0;
	int maxcurret = 1;
	for (int i=1; i <= n; i++)
	{
		cout << i<<' ';
		curret++;
		if (curret == maxcurret) {
			cout<<endl;
			curret = 0;
			if (more == true) {
				maxcurret++;
			}
			if (more == false) {
				maxcurret--;
			}
			if (maxcurret == max) {
				more = !more;

			}
			else if (maxcurret == 1) {
				more = !more;
				max++;
			}
		}
	}



		

	return 0;
}