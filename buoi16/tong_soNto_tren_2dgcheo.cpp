#include<iostream>
#include<math.h>
using namespace std;
int nguyento(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return 0;
	}
	return n > 1;
}
int main(){
	int n; cin>>n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin>>a[i][j];
		}
	}
	//chi can duyet dg cheo chinh i = j , so luong phan tu dc cheo chinh la n
	//dg cheo phu la a[i][n-i-1]
	int tong = 0;
	for(int i = 0; i < n; i++){
		if(nguyento(a[i][i]))
			tong += a[i][i];
		if(nguyento(a[i][n-1-i]))
			tong += a[i][n-1-i];
	}
	if(n % 2 == 1 && nguyento(a[n/2][n/2])){
		//mang co bac n la le thi phan tu o giua bi xet 2 lan
		tong -= a[n/2][n/2];
	}
	cout<<tong;
}
