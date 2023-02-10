#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n+1], b[n+1];
	for(int i = 0; i < n-1; i++){
		int x, y; cin>>x>>y;
		a[x]++;
		b[y]++;
	}
	for(int i = 1; i <= n; i++){
		if(a[i] == n-1){
			//diem i xua hien n-1 lan , tuc la co n-1 duong noi toi cac dinh con lai
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
}
