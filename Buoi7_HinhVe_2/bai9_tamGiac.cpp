#include<iostream>
using namespace std;

int main(){
	int n;cin>>n;
	for(int i = 1; i<= n; i++){
		int d = 0;
		for(int j = 1; j <= n+i-1; j++){
			if(j >= n+1-i && j <= n){
				d = d + 2;
				cout<<d<<" ";
			}
			else if(j > n){
				d = d - 2;
				cout<<d<<" ";
			}
			else
				cout<<"~ ";
		}
		cout<<endl;
	}
}
