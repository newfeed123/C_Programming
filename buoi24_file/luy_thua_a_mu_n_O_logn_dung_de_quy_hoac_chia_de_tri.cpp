#include<bits/stdc++.h>
using namespace std;

int pow(int a, int b){
	if(b == 0)
		return 1;
	if(b % 2 == 0)
		return pow(a,b/2)*pow(a,b/2);
	else
		return pow(a,b/2)*pow(a,b/2)*a;
}
int pow_2(int a, int b){
	//cach 2 chia de tri:
	//vd 2^5 : a = 2, b = 5 , 32
	// b = 5 : res = a = 2 , a = 2x2 = 4 , b = 2
	// b = 2 : a = 4x4 = 16, b = 1
	// b = 1 : res = 2x16 = 32, b = 0 => return
	int res = 1;
	while(b!=0){
		if(b % 2 == 1)
			res *= a;
		a *= a;
		b /= 2;
	}
	return res;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<pow(a,b);
}


