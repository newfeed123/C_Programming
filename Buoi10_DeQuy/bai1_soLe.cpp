#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int so_Le(int n){
	if(n == 0)
		return 1;//da chia het va ko bi return 0
	else {
		if(n%10%2 == 0)
			return 0;
		return so_Le(n/10);
	}
}
int main(){
	float n;cin>>n;
	float res = so_Le(n);
	cout<<res;
}
