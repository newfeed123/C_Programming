#include<iostream>

using namespace std;

void thua_So_NgTo(int n){
	for(int i = 2; i <= n; i++){
		int check = 1;
		while(n % i == 0){
			if(check){
				cout<<i<<" ";	
			}
			n = n / i;
			check = 0;
		}
	}
	if(n > 1)
		cout<<n;
}
int main(){
	int n;cin>>n;
	thua_So_NgTo(n);
}
