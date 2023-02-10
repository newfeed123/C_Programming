#include<iostream>
#include<math.h>
using namespace std;

int ktra_NTo(int n){
	if(n < 2)
		return 0;
	else{
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0)
				return 0;
		}
		return 1;
	}
}
int sum_CS(int n){
	int sum = 0;
	while(n > 0){
		sum += n%10;
		n /= 10;
	}
	return sum;
}
int cS_NTo(int n){
	while(n > 0){
		int tmp = n % 10;
		if(ktra_NTo(tmp) == 0)
			return 0;
		n = n / 10;
	}
	return 1;
}
void soThuanNguyeTo(int a, int b){
	int max = 0, min = 0, dem = 0;
	if(a > b){
		max = a;min= b;
	}
	else{
		max = b; min = a;
	}
	for(int i = min; i < max; i++){
		if(ktra_NTo(i) && ktra_NTo(sum_CS(i)) && cS_NTo(i)){
			dem++;
			cout<<i<<" ";	
		}
	}
	cout<<dem;
}
int main(){
	int a, b;cin>>a>>b;
	soThuanNguyeTo(a,b);
}
