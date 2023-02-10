#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	int start = 64;
	for(int i = 1;i <= n; i++){
		int d = n-1;
		start++;
		cout<<(char)start<<" ";
		int start_2 = start;
		for(int j = 1; j < i; j++){
			start_2 = start_2 + d;
			cout<<(char)start_2<<" ";
			d--;
		}
		cout<<endl;
	}
}
