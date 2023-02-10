#include<iostream>
#include<math.h>
using namespace std;
int Tong_n(int n){
	//int res += pow(-1,n)*n;
	if(n == 1)
		return pow(-1,n)*n;
	return n*pow(-1,n) + Tong_n(n-1);
}
int main(){
	int n;cin>>n;
	cout<<Tong_n(n);
}
