#include<iostream>
#include<math.h>
using namespace std;

int fibonacci(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
 
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        for (int i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;//in ra so fibo thu n
}

int kiemTra_1So_Fibo(int n){
	int i = 0;
	while(n > fibonacci(i)){
		++i;//neu chua tim dc thi tang len : co the vuot qua hoac bang
	}
	if(n == fibonacci(i))
		return 1;
	return 0;
}

int kiemTra_1So_Fibo_cach2(long long n){
	int f1=0, f2=1;
	if(n == 0|| n == 1)
		return 1;
	else{
		for(int i = 2; i <= 92; i++){
			long long fn = f1+f2;
			if(n == fn)
				return 1;//da tim thay
			else{
				//chua tim thay thi dich chuyen
				f1 = f2;
				f2 = fn;
			}
		}
	}
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
int sum_CS(int n){
	int sum = 0;
	while(n > 0){
		sum += n%10;
		n /= 10;
	}
	return sum;
}
void lietKe_Doan(int a, int b){
	int max = 0, min = 0;
	if(a > b){
		max = a;min= b;
	}
	else{
		max = b; min = a;
	}
	for(int i = min; i <= max; i++){
		if(ktra_NTo(i) && kiemTra_1So_Fibo(sum_CS(i))){
			cout<<i<<" ";
		}
	}
}

int main(){
	int a, b;cin>>a>>b;
	lietKe_Doan(a,b);
	//cout<<fibonacci(5);
}
