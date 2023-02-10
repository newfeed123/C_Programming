#include<iostream>

using namespace std;
int main(){
	int n, m; cin>>n>>m;
	int cnt[10001] = {0};
	int max_val = -1e9;
	for(int i = 0; i < n; i++){
		int x; cin>>x;
		max_val = max(max_val, x);
		cnt[x]++;
	}
	for(int i = 0; i < m; i++){
		int x; cin>>x;
		max_val = max(max_val, x);
		cnt[x]++;
	}
	for(int i = 1; i <= max_val; i++){
		if(cnt[i])
			cout<<i<<" ";
	}
	cout<<endl;
	for(int i = 1; i <= max_val; i++){
		if(cnt[i] > 1) //xuat hien ca 2 mang
			cout<<i<<" ";
	}
}
