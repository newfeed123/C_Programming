#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int tich_Cs(int n){
	if(n == 0)
		return 1;
	else{
		if(n % 10 == 0)
			return 0;
		else
			return n%10 * tich_Cs(n/10);
	}
		
}
int tich(int n){
	if(n < 10)
		return n;
	return n%10 * tich(n/10);//tich cs cuoi * tich cs cua cac so con lai
}
int main(){
	int n;cin>>n;
	int res = tich_Cs(n);
	cout<<res;
}
