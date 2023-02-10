#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
int soLuongCS(int n){
	int dem = 0;
	while(n){
		n /= 10;
		dem++;
	}
	return dem;
}
void in_soDau_soCuoi(int n){
	int soDau = n/pow(10,soLuongCS(n)-1);
	int soCuoi = n%10;
	cout<<soDau<<" "<<soCuoi;
}
int main(){
	int n;cin>>n;
	in_soDau_soCuoi(n);
}
