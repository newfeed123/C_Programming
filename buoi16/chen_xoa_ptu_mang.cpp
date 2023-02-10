#include<iostream>
using namespace std;

void chen(int a[], int &n, int x, int k){
	++n;
	for(int i = n; i >k ;i--)
		a[i] = a[i-1];
	a[k] = x;
}
int main(){
	int n; cin>>n; int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	chen(a,n,2,3);
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
}
