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
	int sum = 0;
	int save = n;
	while(n){
		int r = n % 10;
		if(r != 2 && r != 3 && r != 5 && r != 7)
			return 0;
		else{
			sum += r;
		}
		n /= 10;	
	}
	if(soNguyenTo(sum) && soNguyenTo(save))
		return 1;
	return 0;
}
int main(){
	int a, b, dem = 0;
	cin>>a>>b;
	int _min = min(a,b);
	int _max = max(a,b);
	for(int i = _min; i <= _max; i++){
		if(check(i)){
			cout<<i<<" ";
		}
	}
	//cout<<dem;
}
