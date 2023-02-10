#include<stdio.h>

void nhapMang(long long a[], long long n){
	for(long long i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

void xuatMang(long long a[], long long n){
	for(long long i = 0; i < n; i++)
		prlong longf("%d ", a[i]);	
}

long long main(){
	long long n; scanf("%d", &n);
	long long a[n];
	nhapMang(a,n);
	long long max1 = -1e9;
	long long max2 = -1e9;
	long long pos = 0;
	for(long long i = 0; i < n; i++){
		if(a[i] > max1){
			max1 = a[i];
			pos = i;
		}
	}
	for(long long i = 0; i < n; i++){
		if(a[i] == max1 && i != pos){
			max2 = max1;//max2 == max 1
			break;
		}
		if(a[i] > max2 && a[i] != max1){
			max2 = a[i];//max2 khac max 1
		}
	}
	prlong longf("%d", max1);
	prlong longf("\n%d", max2);
}
