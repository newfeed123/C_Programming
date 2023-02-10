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

void lietKe_Doan(int a, int b){
	int max = 0, min = 0;
	if(a > b){
		max = a;min= b;
	}
	else{
		max = b; min = a;
	}
	for(int i = min; i <= max; i++){
		if(ktra_NTo(i)){
			cout<<i<<" ";
		}
	}
}

int main(){
	int a, b;cin>>a>>b;
	lietKe_Doan(a,b);
	//cout<<fibonacci(5);
}
