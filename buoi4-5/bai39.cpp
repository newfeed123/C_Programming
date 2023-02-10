#include<iostream>
using namespace std;

int soNguyenTo(int n){
	if(n < 2)
		return 0;
	for(int i = 2; i <= n/2; i++){
		if(n % i == 0)
			return 0;
	}
	return 1;
}
int rev(int n){
	int res = 0;
	while(n){
		res = res*10 + n%10;
		n /= 10;
	}
	return res;
}
int main(){
	int a,b;cin>>a>>b;
	int max = 0, min = 0;
	if(a > b){
		max = a;
		min = b;
	}
	else{
		max = b;
		min = a;
	}
	for(int i = min; i <= max; i++){
		if(soNguyenTo(i) && soNguyenTo(rev(i)))
			cout<<i<<" ";
	}
}
