#include<iostream>
using namespace std;
//sang cac so NTO tu 0 -> 1e6
int prime[1000001];

//N.log( log( N ) )
void sieve(){
	//Xet cho tat ca cac gia tri mang prime la 1
	for(int i = 0; i <= 1000000; i++){
		prime[i] = 1;
	}
	prime[0] = 0;
	prime[1] = 1;
	for(int i = 2; i <= sqrt(1000000); i++){
		if(prime[i] == 1){
			//duyet all Boi cua i va danh dau no la 0 ( ko la so NTO )
			for(int j = i*i; j <= 1000000; j += i){
				//2 -> 4,6,8,10,12,14,16
				prime[j] = 0
			}
		}
	}
}
int main(){
	sieve();//khi sang xong t se dc 1 mang thu tu tu 0 -> 10^6 chua gia tri 0 va 1 
	for(int i = 1; i <= 1000; i++){
		
	}
}
