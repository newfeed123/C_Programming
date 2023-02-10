#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	for(int i = 1;i <= n; i++){
		int start = 64 + n-i;//gia tri bat dau moi hang
		for(int j = 1; j <= n-i+1;j++){
			cout<<(char)start<<" ";
			start++;
		}
		cout<<endl;
	}
}

