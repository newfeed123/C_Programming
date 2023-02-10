#include<iostream>
#include<math.h>
using namespace std;
int soNgto(int n){
	if(n == 0|| n == 1)
		return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int main(){
	int t; cin>>t;
//	cout<<soNgto(13);
	while(t--){
		int n; cin>>n;
		for(int i = 2; i <= n/2; i++){
			if(soNgto(n-i) && soNgto(i)){
				cout<<i<<" "<<n-i<<" ";
			}
		}
	}
}
