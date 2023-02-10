#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	for(int i = 1;i <= n; i++){
		int save = 1;
		for(int j = 1; j <= 2*i-1; j++){
			if(i==1){
				cout<<i;
				break;
			}
			else
				cout<<save;
				save++;
		}
		cout<<endl;
	}
}
