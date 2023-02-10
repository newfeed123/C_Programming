#include<iostream>
using namespace std;

int gcd(int a, int b){
	for(int i = min(a,b); i >= 1; i--){
		if(a%i == 0 && b%i==0)
			return i;
	}
}
int gcd_EcerLit(int a, int b){
	if(a == 0 || b == 0)
		return a+b;
	else{
		while(a != b){
			if(a > b)
				a = a - b;
			else
				b = b - a;
		}
	}
	return a; //hoac b vi sau vong while a==b
}
int gcd_chiaDu(int a, int b){
	int r;
	while(b > 0){
		r = a % b;
		a = b;
		b = r;
	}
	return a;//if b == 0;
	//gcd(a,b) = gcd(b,a%b)
	//gcd(10,15) = gcd(15,5) = gcd(5,3) = gcd(
}
int lcm(int a, int b){
	return a*b/gcd_chiaDu(a,b);
}
int main(){
	int a, b;cin>>a>>b;
	cout<<gcd(a,b)<<"\n";
	cout<<lcm(a,b);
}
