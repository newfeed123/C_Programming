#include<iostream>
using namespace std;

int main(){
	int n;cin>>n;
	for(int i = 0; i < n; i++){
		for(int j = 1; j <= 2*i ; j++){
				cout<<"~ ";
		}
		for(int j = 1; j <= n-i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i = 0; i < n; i++){
		for(int j = 1; j <= (n+1-2*i); j++){
				cout<<"~ ";
		}
		for(int j = 1; j <= 2*i+2; j++){
			if
			cout<<"* ";
		}
		cout<<endl;
	}
}
