#include<stdio.h>
#include<math.h>
long long gt(int n){
	int res = 1;
	for(int i = 1; i <= n; i++)
		res *= i;
	return res;
}
long long toHop(int n, int k){
	long long ans = 1;
	for(int i = 0; i < k;i++){
		res *= n-i;//n*(n-1)*(n-2)*(n-3)*...*(n-K+1) = TU 
		res /= i+1;//1*2*3*...*K = MAU = K!
	}
}
int main(){
	int n, k;
	scanf("%d%d",&n,&k);
	printf("%lld",gt(n)/(gt(k)*gt(n-k)));
}
