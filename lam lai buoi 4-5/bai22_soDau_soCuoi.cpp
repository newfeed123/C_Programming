#include<iostream>
#include<math.h>
using namespace std;
void check(int n){
	int dem_Cs = 0;
	int tmp = n;
	while(tmp){
		tmp /= 10;
		dem_Cs++;
	}
	
	int soDau = n / pow(10,dem_Cs-1);
	int soCuoi = n % 10;
	cout<<soDau<<"  "<<soCuoi;
}
int main(){
	int n;cin>>n;
	check(n);
}
