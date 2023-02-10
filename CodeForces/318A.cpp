#include<stdio.h>
int main(){
	long long n,k;
	scanf("%lld %lld",&n,&k);
	if(n%2==0){	
		if(k<=n/2){
			printf("%lld",2*k-1);
		}
		else printf("%lld",2*k-n);
	}
	else{
		if(k<=n/2+1)
			printf("%lld",2*k-1);
		else 
			printf("%lld",2*k-n-1);
	}
	
}

