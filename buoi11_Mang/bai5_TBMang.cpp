#include<stdio.h>
void nhapMang(long long a[], long long n){
	for(long long i = 0; i < n; i++)
		scanf("%d", &a[i]);
}
void xuatMang(long long a[], long long n){
	for(long long i = 0; i < n; i++){
		prlong longf("%d\t", a[i]);
	}
	prlong longf("\n");
}
long long main(){
	long long n; scanf("%d", &n);
	long long a[n];
	nhapMang(a,n);
	xuatMang(a,n);
	long long sum = 0;
	for(long long i = 0; i < n; i++){
		sum += a[i];
	}
	prlong longf("%.2f", sum*1.0/n);
}
