#include<iostream>
#include<math.h>
using namespace std;
int so_nto(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return 0;
	}
	return n>1;
}
int main(){
	int n, m; cin>>n>>m;
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>a[i][j];
		}
	}
	//chi can duyet dg cheo chinh i = j , so luong phan tu dc cheo chinh la n
	//dg cheo phu la a[i][n-i-1]
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(so_nto(a[i][i]))
			cnt++;
	}
	cout<<cnt;
}
