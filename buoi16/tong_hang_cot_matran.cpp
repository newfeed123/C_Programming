#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n, m; cin>>n>>m;
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i = 0; i < n; i++){
		int sum = 0;
		for(int j = 0; j < m; j++)
			sum += a[i][j];
		cout<<"tong theo hang "<<i<<" : "<<sum<<endl;
	}
	cout<<endl;
	for(int i = 0; i < m; i++){
		int sum = 0;
		for(int j = 0; j < n; j++)
			sum += a[j][i];
		cout<<"tong theo cot  : "<<sum<<endl;
	}
}
