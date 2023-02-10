#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int d = 0;
	int k = 1;
	for(int i = 1; i <= n; i++){
			for(int j = 1; j <= i; j++){
				k = k + d;
				cout<<k<<" ";
				d++;
			}
			cout<<endl;
		}
	}

