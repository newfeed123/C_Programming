#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	//in 2 tam giac roi ghep vao nhau
	for(int i = 2; i <= n; i++){
		for(int j = 1; j <= n-i+1; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
