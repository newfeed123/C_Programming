#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	int cnt = 0;
	while(t--){
		int x, y, z;
		cin>>x>>y>>z;
		if(x+y+z >= 2){
			++cnt;
		}
	} 
	cout<<cnt;
}
