#include<iostream>

using namespace std;

int main(){
	//phan tich 1 so thanh tong cua hai so khong phai nguyen to
	//n chan thi n = 4 + n-4
	//n le thi n = 9 + n-9
	int n; cin>>n;
	if(n % 2 == 0)
		cout<<4<<n-4;
	else
		cout<<9<<n-9;
}
