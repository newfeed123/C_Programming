#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	for(int i = 1; i <= n; i++){
		char c = 'e';
		for(int j = 1; j <= n; j++){
			if(j < i){
				cout<<c<<" ";
				c--;
			}
			else
				cout<<c<<" ";
		}
		cout<<endl;
	}
}
