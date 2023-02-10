#include<stdio.h>
#include<math.h>
void nhapMang(long long a[], long long n){
	for(long long i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

void xuatMang(long long a[], long long n){
	for(long long i = 0; i < n; i++)
		printf("%d ", a[i]);	
}
long long soChinhPhuong(long long n){
	long long i = 0;
	while(i*i <= n){
		if(i*i == n)
			return 1;
		++i;
	}
	return 0;
}
int main(){
	long long n; scanf("%d", &n);
	long long a[n];
	nhapMang(a,n);
	long long cnt = 0;
	for(long long i = 0; i < n; i++){
		if(soChinhPhuong(a[i])){
			cnt++;
		}
	}
	printf("%d\n", cnt);
	for(long long i = 0; i < n; i++){
		if(soChinhPhuong(a[i])){
			printf("%d ", a[i]);
		}
	}
}
