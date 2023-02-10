#include<iostream>
using namespace std;

int soFiBo_thu_n(int n){
	int f0 = 1, f1 = 1, fn = 1;
	if(n == 0 || n == 1)
		return n;
	else{ 
		for(int i = 2; i < n; i++){
			f0 = f1;
			f1 = fn;
			fn = f0 + f1;
		}
	}
	return fn;
}
void in_n_soFibo(int n){
	for(int i = 0; i < n; i++){
		cout<<soFiBo_thu_n(i)<<" ";
	}
}
int main(){
	int n; cin>>n;
	in_n_soFibo(n);
}
