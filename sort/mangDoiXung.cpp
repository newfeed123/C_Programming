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
void count(int a[], int n){
	int max = a[0];
	for(int i = 1;)
}
//ky thuat 2 con tro;
// Mang doi xung  1 2 3 4 3 2 1
int doiXung(int a[], int n){
	int l = 0, r = n-1;
	while(l<r){
		if(a[l] != a[r])
			return 0;
		++l;
		--r;
	}
	return 1;
}
int main(){
	int n; cin>>n;
	int a[n];
	nhapMang(a,n);
	xuatMang(a,n);
}
