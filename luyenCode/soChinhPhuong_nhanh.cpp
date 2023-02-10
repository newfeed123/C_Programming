#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long l, r;
	cin>>l>>r;
	int left = sqrt(l);//lam tròn xuông can(5) = 2 => sai => can lam
	if(1LL*left*left != l)
	int right = sqrt(r);
	for(int i = left; i <= right; i++){
		//if(1ll*i*i >= a)
		cout<<1LL*i*i<<"\t";
	}
}
