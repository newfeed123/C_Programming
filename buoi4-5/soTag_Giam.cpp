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
int so_Tang(int n){
	//1234
	int check = 0;
	while(n > 10){
		int tmp1 = n % 10;//4
		int tmp2 = (n/10) % 10;
		if(tmp1 > tmp2)
			check = 1;
		else
			return 0;
		n /= 10;
	}
	if(check == 1)
		return 1;
}
int so_Giam(int n){
	//4321
	int check = 0;
	while(n > 10){
		int tmp1 = n % 10;//1
		int tmp2 = (n/10) % 10;
		if(tmp1 < tmp2)
			check = 1;
		else
			return 0;
		n /= 10;
	}
	if(check == 1)
		return 1;
}
int main(){
	int n, dem = 0;cin>>n;
	for(int i = pow(10,n-1); i <= pow(10,n)-1; i++){
		if((soNguyenTo(i))&&(so_Giam(i)||so_Tang(i))){
			dem++;
			cout<<i<<" ";
		}
	}
	cout<<endl<<dem;
}
