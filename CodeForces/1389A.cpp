#include<iostream>
using namespace std;
int gcd(int a, int b){
	if(a == 0 || b == 0)
		return a+b;
	while(b){
		int r = a%b;
		b = r;
		a = b;
	}
	return b;
}
int lcm(int a, int b){
	return (a*b)/gcd(a,b)
}
int main(){
	int t;
	int l, r;
	cin>>t;
	while(t--){
		cin>>l>>r;
		
	}
}
