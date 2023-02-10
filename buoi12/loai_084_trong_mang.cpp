#include<iostream>

using namespace std;
void solve(long long n){
	int cnt = 0, a[20];
	while(n){
		a[cnt++] = n%10;
		n /= 10;
	}
	int check[20] = {0};
	for(int i = cnt-1; i >= 2; i--){
		if(a[i] == 0 && a[i-1] == 8 && a[i-2] == 4){
			check[i] = 1; check[i-1] = 1; check[i-2] = 1;
		}
	}
	for(int i = cnt-1; i >= 0; i--){
		if(check[i] == 0)
			cout<<a[i];
	}
	cout<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		long long n;
		cin>>n;
		solve(n);
	}
}
