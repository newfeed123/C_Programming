#include<iostream>
#include<math.h>
using namespace std;
//1 so dc coi la so co 3 uoc so neu no la binh phuong cua 1 so nguyen to
int prime[1001];
void sieve(){
	for(int i = 0; i <= 1000; i++){
		prime[i] = 1;
	}
	prime[0] = 0;
	prime[1] = 1;
	for(int i = 2; i <= sqrt(1000); i++){
		if(prime[i]){
			for(int j = i*i; j <= 1000; j++)
				prime[j] = 0;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int n;cin>>n
		for(int i = 2; i <= sqrt(1000); i++){
			if(prime[i])
				cout<<i*i<<" ";
		}
		cout<<endl;
	}
}
