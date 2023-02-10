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
int max(int a[], int n){
	int max = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > max)
			max = a[i];
	}
	return max;
}
void max_thu_2(int a[], int n){
	int so_max = max(a,n);
	for(int i = 0; i < n; i++){
		if(a[i] == so_max){
			for(int j = i; j < n; j++){
				a[j] = a[j+1];	
			}
		}
	}
	int max = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > max)
			max = a[i];
	}
	cout<<max;
}
int main(){
	int n; cin>>n;
	int a[n];
	nhapMang(a,n);
	xuatMang(a,n);
	max_thu_2(a,n);
}
