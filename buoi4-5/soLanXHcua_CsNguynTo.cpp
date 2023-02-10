#include<iostream>
using namespace std;
int soNTo(int n){
	if(n < 2)
		return 0;
	for(int i = 2; i <= n/2; i++){
		if(n % i == 0)
			return 0;
	}
	return 1;//n = 2 hoac bang 3
}
void in_soLanXH(long long n){
	// 2 3 5 7 
	int dem_2 = 0, dem_3 = 0, dem_5 = 0, dem_7 = 0;
	while(n>0){
		int du = n % 10;
		//112255
		if(du == 2)
			dem_2++;
		if(du == 3)
			dem_3++;
		if(du == 5)
			dem_5++;
		if(du == 7)
			dem_7++;
		n /= 10;
	}
	if(dem_2)
		cout<<2<<" "<<dem_2<<endl;
	if(dem_3)
		cout<<3<<" "<<dem_3<<endl;
	if(dem_5)
		cout<<5<<" "<<dem_5<<endl;
	if(dem_7)
		cout<<7<<" "<<dem_7<<endl;
}
int main(){
	long long n;cin>>n;
	in_soLanXH(n);
}
