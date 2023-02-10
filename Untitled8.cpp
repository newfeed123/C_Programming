#include<iostream>
#include<math.h>
using namespace std;

int gcd(int a, int b){
	if(a == 0 || b == 0)
		return a+b;
	while(a != b){
		if(a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}
int gcd_chiaDu(long long a, long long b){
	long long r;
	while(b > 0){
		r = a%b;
		a = b;//
		b = r;
	} 
	return a;// 20/8 r = 4, 
}
long long phi(long long n){
	long long res = n;
	for(int i = 2; i <= sqrt(n); i++){
		if(n & i == 0){
			while(n % i == 0){
				n /= i;
				res = res- res/i;
			}
		}
	}
	if(n > 1)// 28 = 2 x 2 x 7 , khi n la 1 so nguyen to thi no se chi chia het cho chinh nó
		res = res - res/n;
	return res;
}
int main(){
	int n;cin>>n;
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(gcd(i,n) == 1)
			dem++;
	}
	cout<<dem++;
	//dung phi ham euler
	//phi(n) = n * (1-1/p) ; p la uoc so nguyen to cua n
	//neu cho n = 10^16 thi dung phi ham euler
}
