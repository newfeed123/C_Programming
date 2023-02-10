#include<iostream>
#include<math.h>
using namespace std;
bool checkNto(long long n){
	if(n < 2)
		return false;
	else{
		for(int i = 2; i <= sqrt(n); i++){//tu 2 
			if(n % i == 0)
				return false;
		}
	}
	return true;
}
int main(){
	long long n; cin>>n;
	long long dem = 0;
	while(n > 0){
		long long tmp = n % 10;
		if(checkNto(tmp)){
			dem++;
		}
		n /= 10;
	}
	cout<<dem;
}
