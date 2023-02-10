#include<iostream>
using namespace std;

//sang nguyen to : 
int prime[1000001];
void sieve(){
	for(int i = 1; i <= 1000000; i++)
		prime[i] = 1;
	prime[0] = 0;
	prime[1] = 0;
	for(int i = 2; i <= 1000; i++){
		if(prime[i] == 1){
			for(int j = i*i; j <= 1000000; j += i){
				prime[j] = 0;
			}
		}
	}
}
int main(){
	sieve();	
	int ok = 0;
	int n; cin>>n;
	for(int i = 2; i <= n/2; i++){
		if(prime[i] && prime[n-i])
			cout<<i<<" "<<n-i;
			ok = 1;
	}
	if(!ok)
		cout<<"ko co cap nao";
}
