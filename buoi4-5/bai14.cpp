#include<iostream>
using namespace std;
int tichCS(int n){
	int tich = 1;
	while(n){
		tich *= n%10;
		n /= 10;
	}
	return tich;
}
int main(){
	int n; cin>>n;
	cout<<tichCS(n);
}
