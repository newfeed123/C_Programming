#include<iostream>

using namespace std;
int giaithua(int n){
	int tich = 1;
	for(int i = 1; i <= n; i++)
		tich *= i;
	return tich;
}
int toHop(int k, int n){
	return giaithua(n)/(giaithua(k) * giaithua(n-k));
}

void tamGiacPC(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			cout<<toHop(j,i)<<" ";			
		}
		cout<<endl;
	}
}
int main(){
	int n;cin>>n;
	tamGiacPC(n);
}
