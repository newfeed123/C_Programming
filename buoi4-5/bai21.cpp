#include<iostream>
using namespace std;
int giaithua(int n){
	if(n < 2)
		return 1;
	return giaithua(n-1)*n;
}
int soStrong(int n){
	int sum = 0;
	int save = n;
	while(n){
		sum += giaithua(n%10);
		n /= 10;
	}
	if(sum == save)
		return 1;
	return 0;
}
int main(){
	int n; cin>>n;
	cout<<soStrong(n);
}
