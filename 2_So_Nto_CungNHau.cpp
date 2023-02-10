#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
int gcd(int a, int b){
	int x = 0;
	for(int i = 1; i <= min(a,b); i++){
		if(a%i == 0 && b%i==0 && i > x){
			x = i;
		}
	}
//	for(int i = min(a,b); i > 0; i--){
//		if(a%i == 0 && b%i== 0)
//			return i;
//	}
	return x;
}
int gcd_Eucolit(int a, int b){
	if(a == 0||b == 0)
		return a+b;
	while(a != b){
		if(a > b)
			a = a-b;
		else
			b = b-a;
	}
	return a;
}
int gcd_chiaDu(int a, int b){
	int r = 0;
	while(b > 0){
		r = a%b;
		a = b;
		b = r;
	}
	return a;
}
int main(){
	int n, m; cin>>n>>m;
	if()
}
