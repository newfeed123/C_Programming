#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	for(int i = 1;i <= n; i++){
		int start = i*(i+1)/2;
		int d = i;
		for(int j = 1; j <= n-i+1;j++){
			cout<<start<<" ";
			start = start + d;
			d++;
		}
		cout<<endl;
	}
}

