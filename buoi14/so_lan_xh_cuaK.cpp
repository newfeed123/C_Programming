#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n, k; cin>>n>>k;int a[n];
		int dem = 0;
		for(int i = 0; i < n; i++){
			cin>>a[i];
			if(a[i] == k)
				dem++;//dem luon trong luc nhap mang
		}
		if(dem)
			cout<<dem;
		else
			cout<<-1;
		cout<<endl;
	}
}
