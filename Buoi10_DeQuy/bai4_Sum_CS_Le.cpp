#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int sum_Cs_Le(int n){
	if(n == 0)
		return 0;
	else{
		if(n%10%2 == 1)
			return n%10 + sum_Cs_Le(n/10);
		else
			return sum_Cs_Le(n/10);
	}
}
int main(){
	int n;cin>>n;
	int res = sum_Cs_Le(n);
	cout<<res;
}
