#include<iostream>
#include<math.h>
using namespace std;
int prime(int n){
	if(n < 2)
		return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return 0;
	}
	return 1;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
			for(int i = 1; i < n; i++){
				if(prime(i) && prime(n-i))
				{
					cout<<i<<"  "<<n-i;
					break;
				}
			}
	}
}
