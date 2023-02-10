#include <iostream>

using namespace std;

int n;

int main()
{
	cin >> n;
	for (int i = 1; i < 2 * n ; i++)
	{
		for (int j = 1; j < 2 * n; j++) {
			if (((i < n) &&(j - i >= n)) || ((i > n) && (i + j >= 3 * n)) ){
				cout << "  ";
			}
			else
			{
				if (((i <= n) && (j <= 2 * (i - 1))) || ((i > n) && (j <= 2 * (2* n - i -1)))) {
					cout << "~ ";
				}
				else
				{
					cout << "* ";
				}
			}
		}
		cout << endl;
	}

}
