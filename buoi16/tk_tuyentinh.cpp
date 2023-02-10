#include<iostream>
using namespace std;

int tk_tuyenTinh(int a[], int n, int k){
	for(int i = 0; i < n; i++){
		if(k == a[i])
			return 1;// return i : tra ve vi tri dau tien; duyet tu cuoi ve cung tra ve vi tri cuoi cung
	}
	return 0;
}
int main(){
	int n; cin>>n; int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
}
