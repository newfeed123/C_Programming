#include<iostream>
#include<math.h>
using namespace std;
int soNguyenTo(int n){
	if(n < 2)
		return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return 0;
	}
	return 1;
}
int check(int n){
	int max = n%10;
	n /= 10;
	while(n){
		int r = n%10;
		if(max < r)
			return 0;
		n /= 10;
	}
	return 1;	
}
int main(){
	int n;cin>>n;
	for(int i = 1; i <= n; i++){
		if(check(i) && soNguyenTo(i))
			cout<<i<<"  ";
	}
}
