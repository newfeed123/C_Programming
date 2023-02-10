#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int sum_CS_chan(int n){
	if(n == 0)
		return 0;
	else{
		if(n % 10 % 2 == 0)
			return n % 10 + sum_CS_chan(n/10);
		else 
			return sum_CS_chan(n/10);
	}
}
int main(){
	int n;cin>>n;
	int res = sum_CS_chan(n);
	cout<< setprecision(2)<<fixed <<res;
}
