#include<iostream>
using namespace std;

int main(){
	int n;cin>>n;
	int tong_chan, so_soHang;
	//0,2,4,...,n-1,n;
	if(n % 2 == 0){
		so_soHang = ((n-2)-0)/2 + 1;
		tong_chan = (((n-2)+0)*so_soHang) / 2;
	}
	else if(n % 2 != 0){
		so_soHang = ((n-1)-0)/2 + 1;
		tong_chan = (((n-1)+0)*so_soHang) / 2;
	}
	cout<<tong_chan;
}
