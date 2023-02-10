#include<iostream>
using namespace std;
int cs[10] = {0};
int indx = 0;
int main(){
	int t;cin>>t;
	while(t--){
		int n; cin>>n;int a[n];
		for(int i = 0; i < n; i++){
			cin>>a[i];
			while(a[i]){
				cs[a[i]%10]++;
				a[i] = a[i] / 10;
			}
		}
		for(int i = 0; i <= 9; i++){
			if(cs[i])
				cout<<i<<" ";
		}
		cout<<endl;
	}
}
