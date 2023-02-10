#include<stdio.h>

long long main(){
	long long n;
	scanf("%d", &n);
	long long a[n];
	for(long long i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	long long min = 1e9;

	for(long long i = 0; i < n; i++){
		if(a[i] < min)
			min = a[i];
	}
	long long vt = 0;
//	for(long long i = n; i >= 0; i--){
//		if(min == a[i]){
//			vt = i+1;	
//			break;
//		}
//	}
	for(long long i = 0; i < n; i++){
		if(a[i] <= min){
			min = a[i];
			vt = i+1;
		}
	}
	prlong longf("%d",  vt);
}
