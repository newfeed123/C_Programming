#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	int cnt[100001];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n; i++){
		if(cnt[a[i]] == 0){
			cout<<a[i]<<" ";
			cnt[a[i]] = 1;
		}
	}
}
