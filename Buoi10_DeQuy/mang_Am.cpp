#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int mang_Am(int a[], int n){
	if(n == -1)
		return 1;//duyet het (n == -1) va ko co so nao am
	if(a[n] > 0)
		return 0;//ton tai 1 so duong
	else 
		mang_Am(a,n-1);
}
int main(){
	int n;cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	cout<<mang_Am(a,n-1);
}
