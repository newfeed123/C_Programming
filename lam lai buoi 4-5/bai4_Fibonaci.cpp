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
int Fibo_thu_n(int n){
	int f0 = 0, f1 = 1, fn = 1;
	if(n == 0|| n == 1)
		return 1;
	for(int i = 2; i < n; i++){
		//tim so fibo thu 3 ( n == 3 )
		f0 = f1;
		f1 = fn;
		fn = f0 + f1;
	}
	return fn;
}
int check(int n){
	int sum = 0;
	int save = n;
	while(n){
		sum += n%10;
		n /= 10;
	}
	//kiem tra xem sum co thuoc day fibo ko
	int f0 = 0, f1 = 1, fn = 1;
	while(f0 + f1 <= sum){
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
	}
	if(fn == sum)
		return 1;
	return 0;
}
int main(){
	int a, b, dem = 0;
	cin>>a>>b;
	int _min = min(a,b);
	int _max = max(a,b);
	for(int i = _min; i <= _max; i++){
		if(check(i) && ktra_NTo(i)){
			cout<<i<<" ";
		}
	}
}
