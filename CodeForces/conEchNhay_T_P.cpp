#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a, b, k;
	cin>>a>>b>>k;
	//k la tong so lan nhay
	int soLan_Nhay_Trai, soLan_Nhay_Phai;
	if(k % 2 == 0){
		soLan_Nhay_Phai = soLan_Nhay_Trai = k/2;
	}
	else{
		soLan_Nhay_Trai = k/2;
		soLan_Nhay_Phai = soLan_Nhay_Trai + 1;
	}
	int res = 0;
	res = abs(soLan_Nhay_Phai*a-soLan_Nhay_Trai*b);
	cout<<res;
}
