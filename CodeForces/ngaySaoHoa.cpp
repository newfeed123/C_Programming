#include<iostream>
using namespace std;

int main(){
	int soNgay;cin>>soNgay;
	int tuan = soNgay/7;
	if(soNgay % 7 == 0){
		cout<<2*tuan<<" "<<2*tuan;
	}
	else if(soNgay % 7 == 1){
		cout<<2*tuan<<" "<<2*tuan+1;//co the chon them 1 ngay nua de nghi luon
	}
	else if(soNgay % 7 > 2 && soNgay % 7 < 6){
		cout<<2*tuan<<" "<<2*tuan+2;
	}
	else if(soNgay % 7 == 6){
		cout<<2*tuan+1<<" "<<2*tuan+2;
	}
}
