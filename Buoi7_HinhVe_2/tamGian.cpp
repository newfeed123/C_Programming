#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	for(int i = 1; i <= n; i++){
		cout<<i<<" ";
		int save = i;
		int d = 4;
		for(int j = 1; j < i;j++){
			//i = 2 moi chay for
			save = save + d;
			cout<<save<<" ";
			d--;
		}
		cout<<endl;
	}
}
