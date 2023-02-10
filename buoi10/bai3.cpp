#include<stdio.h>

void nhapMang(long long a[], long long n){
	for(long long i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

void xuatMang(long long a[], long long n){
	for(long long i = 0; i < n; i++)
		prlong longf("%d ", a[i]);	
}

long long thuanNgich(long long n){
	long long tmp = n;
	long long res = 0;
	while(n){
		res = res*10 + n%10;
		n /= 10;
	}
	if(res == tmp)
		return 1;
	return 0;
}
long long main(){
	long long n; scanf("%d", &n);
	//long long x = thuanNgich(123321);
	//prlong longf("%d", x); 
	long long a[n], b[n];
	long long cnt = 0;
	nhapMang(a,n);
	for(long long i = 0; i < n; i++){
		if(thuanNgich(a[i])){
			//cnt++;
			b[cnt] = a[i];
			cnt++;
		}
	}
	printf("%d\n", cnt);
	for(long long i = 0; i < n; i++){
		if(thuanNgich(a[i])){
			printf("%d ", a[i]);
		}
	}
	
}
