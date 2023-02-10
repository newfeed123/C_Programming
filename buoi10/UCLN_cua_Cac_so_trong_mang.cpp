#include<iostream>
using namespace std;
int gcd(int a, int b){
	if(a == 0 || b == 0)
		return a+b;
	int r = 0;
	while(b){
		r = a%b;
		a = b;
		b = r;
	}
	return a;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	int test = 0;
	for(int i= 0; i < n; i++){
		cin>>a[i];
		test = gcd(a[i], test);
	}
	cout<<test;
}
