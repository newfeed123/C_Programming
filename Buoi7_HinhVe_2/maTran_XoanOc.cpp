#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	for(int i = 1; i <= n; i++){
		int save = i;
		for(int j = 1; j <= n; j++){
			if(j <= i)
				cout<<save--;
			else
				cout<<++save;
		}
		cout<<endl;
	}
}
