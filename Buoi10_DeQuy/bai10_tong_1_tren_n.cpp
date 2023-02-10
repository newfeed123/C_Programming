#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
float Tong_1_tren_n(float n){
	//int res += pow(-1,n)*n;
	if(n == 1)
		return 1;
	return 1.0/n + Tong_1_tren_n(n-1);
}
int main(){
	float n;cin>>n;
	float res = Tong_1_tren_n(n);
	cout<< setprecision(2)<<fixed <<res;
}
