#include<iostream>
using namespace std;

int main(){
	long long n; cin>>n;
	int dem_1 = 0, dem_2 = 0;
	while(n > 0){
		//111222
		long long tmp = n % 10;
		if(tmp % 2 == 0)
			dem_2++;
		else
			dem_1++;
		n /= 10;
	}
	if(dem_1 == dem_2)
		cout<<"YES";
	else
		cout<<"NO";
}
