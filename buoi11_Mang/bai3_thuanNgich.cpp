#include<iostream>
using namespace std;
void nhapMang(int a[], int n){
	for(int i = 0; i < n; i++)
		cin>>a[i];
}
void xuatMang(int a[], int n){
	for(int i = 0; i < n; i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
int soThuanNghich(int n){
	int x = n;
	int res = 0;
	while(n){
		res = res*10 + n%10;
		n /= 10;
	}
	if(res == x)
		return 1;
	return 0;
}
int main(){
	int n; cin>>n;
//	int a[n];
//	nhapMang(a,n);
//	xuatMang(a,n);
//	max_thu_2(a,n);
	cout<<soThuanNghich(n);
}
