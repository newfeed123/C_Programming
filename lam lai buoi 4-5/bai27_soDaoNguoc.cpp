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
	int mid = n-(soDau*pow(10,dem_Cs-1)+soCuoi);
//	cout<<soDau*pow(10,dem_Cs-1)+soCuoi<<endl;
//	cout<<n<<endl;
//	cout<<mid<<endl;
	int res = 0;
	if(soCuoi != 0){
		res = soCuoi*pow(10,dem_Cs-1)+mid+soDau;	
	}
	else
		res = mid+soDau;
	cout<<res;
}
int main(){
	int n;cin>>n;
	check(n);
}
