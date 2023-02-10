#include<iostream>
#include<math.h>
using namespace std;

int main(){
	long long n;//so lit can mua
	int giaChai_1Lit, giaChai_2Lit;
	cin>>n>>giaChai_1Lit>>giaChai_2Lit;
	if(giaChai_1Lit <= (float)giaChai_2Lit/2){
		cout<<1LL*n*giaChai_1Lit;
	}
	else{
		if(n % 2 == 0){
			cout<<n/2 * giaChai_2Lit*1LL;
		}
		else{
			cout<<(n-1)/2 * giaChai_2Lit + giaChai_1Lit;
		}
	}
}
