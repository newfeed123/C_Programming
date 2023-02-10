#include<iostream>
#include<math.h>
using namespace std;
int rev(int n){
	int res = 0;
	int tmp = n;
	while(n){
		res = res*10 + n%10;
		n /= 10;
	}
	if(res == tmp)
		return 1;
	return 0;
}
int check(int n){
	int dem = 0;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			dem++;
			n /= i;
		}
	}
	if(n > 1)
		dem++;//chinh no la 1 thua so nguyen to
	if(dem >= 3)
		return 1;
	return 0;
}
int main(){
	int a, b, dem = 0;
	cin>>a>>b;
	int _min = min(a,b);
	int _max = max(a,b);
	for(int i = _min; i <= _max; i++){
		if(check(i) && rev(i)){
			cout<<i<<" ";
		}
	}
}
