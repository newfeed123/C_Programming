#include<iostream>

using namespace std;

int main(){
	int so_luong_so, tong;
	cin>>so_luong_so;
	int so_cuoi = 1 + 3 * (so_luong_so-1);
	tong = (so_cuoi + 1) * so_luong_so / 2;
	cout<<tong;
}
