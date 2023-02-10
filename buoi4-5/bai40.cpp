#include<iostream>
#include<math.h>
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
int binhPhuong(int n){
	return n*n;	
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
		int j = 2;//khoi tao 1 so Nguyen to
		while(j <= i && soNguyenTo(j)){
			if(i % j == 0 && i % binhPhuong(j) == 0){
				cout<<i<<" ";
				break;
			}
			j++;
		}
	}
}
