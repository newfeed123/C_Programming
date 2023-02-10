#include<iostream>
using namespace std;
int fibo_thu_n(int n){
	if(n == 0 || n == 1)
		return n;
	return fibo_thu_n(n-1)+fibo_thu_n(n-2);
}
int main(){
	int n;cin>>n;
	cout<<fibo_thu_n(n);
}
