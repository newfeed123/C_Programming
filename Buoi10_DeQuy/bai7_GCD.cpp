#include<iostream>
using namespace std;
int gcd(int a, int b){
	if(b == 0)
		return a;
	return gcd(b,a%b);
}
int gcd_Huy(int a, int b){
	int r = a%b;
	if(r == 0)
		return b;
	return gcd_Huy(b,r);
}
int main(){
	int a, b;
	cin>>a>>b;
	cout<<gcd_Huy(a,b);
}
