#include <iostream>

using namespace std;

int main()
{
	
	int m, n;
	cin >> m >> n;
	int k = m;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (k + j - 1 >= n) {
				cout << n;
			}
			else {
				cout << k + j - 1;
			}
		}
		k--;
		cout << endl;
	}
}
