#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i = 1; i <= n; i++){
		int d = 0;
			for(int j = 1; j <= 2*i-1; j++){
				if(j <= i){
					d = d + 2;
					cout<<d<<" ";
				}
				else{
					d = d - 2;
					cout<<d<<" ";
				}
			}
			cout<<endl;
		}
	}

