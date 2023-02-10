#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	int save = 0;
	for(int i = 1;i <= n; i++){
		for(int j = 1; j <= i; j++){
			save = save + 1;
			cout<<save<<" ";
		}
		cout<<endl;
	}
}
