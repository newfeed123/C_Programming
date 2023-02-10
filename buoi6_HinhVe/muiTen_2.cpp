#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n*2-1;i++){
		if(i<=n){
			for(int j = 1;j<=n-i;j++){
			cout<<"~";
			}
			for(int t = 1;t<=n-i+1;t++){
				cout<<"*";
			}
			cout<<endl;
		}
		if(i>n){
			for(int j = 1;j<=i-n;j++){
			cout<<"~";
			}
			for(int t = 1;t<=i-n+1;t++){
				cout<<"*";
			}
			cout<<endl;
		}
	}
}
