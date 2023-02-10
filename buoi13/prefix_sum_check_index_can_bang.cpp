#include<iostream>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	int prefix_sum[n] = {0};
	for(int i = 0; i < n; i++){
		if(i == 0)
			prefix_sum[i] = a[i];
		else
			prefix_sum[i] = prefix_sum[i-1] + a[i];
	}
	int q; cin>>q;
	while(q--){
		for(int i = 1; i < n-1; i++){
			if(prefix_sum[i-1] == prefix_sum[n-1] - prefix_sum[i])
				cout<<"chi so can bang trong mang la : "<<i<<endl;
		}
	}
}
