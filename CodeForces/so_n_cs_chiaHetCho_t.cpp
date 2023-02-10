#include<iostream>

using namespace std;
int main(){
	int n, t;cin>>n>>t;
	//n chu so chia het cho t
	if(t == 10){
		//so chia het cho 10
		if(n <= 1)
			cout<<"-1";//ko ton tai
		else{
			cout<<"1";
			for(int i = 0; i < n-1; i++){
				cout<<"0";
			}
		}
	}
	else{
		for(int i = 0; i < n; i++){
			cout<<t;
		}
	}
}
