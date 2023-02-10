#include<iostream>
using namespace std;
int main(){
	int n,m;cin>>n>>m;
	for(int i = 1;i <= n; i++){
		char d = 'f';
		for(int j = 1; j <= m; j++){
			if(j < i){
				cout<<d<<" ";
				d--;
			}
			else
				cout<<d<<" ";
		}
		cout<<endl;
	}
}
