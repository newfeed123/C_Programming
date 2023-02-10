#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n, k, cnt = 0; cin>>n>>k;
	int a[n], b[k];
	for(int i = 0; i < n; i++){
		cin>>a[i];
		if(i >= n-k){
			b[cnt++] = a[i]; 
		}
	}
	for(int i = n-1; i >= k; i--){
		a[i] = a[i-k];//nghia mai moi ra
	}
	for(int i = 0; i < k; i++){
		a[i] = b[i]; 
	}
	for(int i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}
}
