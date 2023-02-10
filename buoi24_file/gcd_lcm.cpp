#include<bits/stdc++.h>
using namespace std;
int gcd_for(int a, int b){
	for(int i = min(a,b); i > 1; i--){
		if(a % i == 0 && b % i == 0)
			return i;
	}
}
int gcd_ecolit(int a, int b){
	if(a == 0 || b == 0)
		return a+b;
	else{
		while(a != b){
			if(a > b)
				a -= b;
			else
				b -= a;
		}
		return a;
		//gcd(15,10)= gcd(5,10) = gcd(5,5) -> a==b -> return a
	}
}
int gcd_chia_du(int a, int b){
	int r;
	while(b > 0){
		r = a%b;
		a = b;
		b = r;
	}
	return a;//if b==0
	//gcd(10,15) = gcd(15,10) = gcd(10,5) = gcd(5,0) =>return a
}
int lcm(int a, int b){
	return a*b / gcd_chia_du(a,b);
}
int main(){
	int x1 = gcd_chia_du(15,10);
	int x2 = gcd_ecolit(15,10);
	int x3 = gcd_for(15,10);
	cout<<x1-x2-x3;
}


