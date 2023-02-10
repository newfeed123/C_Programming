#include<iostream>
#include<math.h>
using namespace std;
int rev(int n){
	int save = n, res;
	while(n){
		int res = res*10 + n%10;
		n /= 10;
	}
	if(res == save)
		return 1;
	return 0;
}
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
int dem_tim_Uoc_NguyenTo(int n){
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(n % i == 0 && ktra_NTo(i))
			dem++;
	}
	if(dem >= 3)
		return 1;
	return 0;
}
int main(){
	int a, b;
	cin>>a>>b;
	int max = 0, min = 0;
	if(a > b){
		max = a;min= b;
	}
	else{
		max = b; min = a;
	}
	for(int i = min; i <= max; i++){
		if(dem_tim_Uoc_NguyenTo(i) && rev(i))
			cout<<i<<" ";
	}
}
