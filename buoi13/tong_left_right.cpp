#include<iostream>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	int prefix_sum[n];
	for(int i = 0; i < n; i++){
		if(i == 0)
			prefix_sum[i] = a[i];
		else
			prefix_sum[i] = prefix_sum[i-1] + a[i];
	}
	int q; cin>>q;
	while(q--){
		int l, r;
		cin>>l>>r;
		int sum = 0;
		for(int i = l; i <= r; i++){
			if(l == 0)
				sum = prefix_sum[r];
			else
				sum = prefix_sum[r] - prefix_sum[l-1];
		}
		cout<<sum<<endl;	
	}
}
