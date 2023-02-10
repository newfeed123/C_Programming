#include<iostream>
using namespace std;
long long fibo[93];//0-92
void sinh(){
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i <= 92; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
}
int main(){
	sinh();
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<fibo[n]<<"\n";
	}
}
