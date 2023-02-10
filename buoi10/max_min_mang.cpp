#include<stdio.h>
#include<math.h>
long long nt(long long n){
	for(long long i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return 0;
	}
	return n > 1;
}

long long main(){
	long long n, x;
	scanf("%d", &n);
	long long a[n];
	for(long long i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &x);
	long long cnt = 0;
	for(long long i = 0; i < n; i++){
		if(x == a[i])
			cnt++;
	}
	prlong longf("%d", cnt);
//	long long max = -1e9, min = 1e9;
//	for(long long i = 0; i < n; i++){
//		if(a[i] < min)
//			min = a[i];
//		if(a[i] > max)
//			max = a[i];
//	}
//	prlong longf("max : %d", max);
	
	
}
