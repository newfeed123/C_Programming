#include<stdio.h>
#include<math.h>
void nhapMang(int a[], int n){
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

void xuatMang(int a[], int n){
	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);	
}
//int gcd(int a, int b){
////	for(int i = min(a,b); i > 0; i--){
////		if(a % i == 0 && b % i == 0);
////			return i
////	}
//	int res = 0;
//	for(int i = 1; i <= min(a,b); i++){
//		if(a % i == 0 && b % i == 0 && i > res)
//			res = i;
//	}
//	return res;
//}
int gcd_EucoLit(int a, int b){
	if(a == 0 || b == 0)
		return a+b;
	else{
		while(a != b){
			if(a > b)
				a = a - b;
			else
				b = b - a;
		}
		return a;
	}
}
int gcd_chiaDu(int a, int b){
	if(a == 0 || b == 0)
		return a+b;
	else{
		int r = 0;
		while(b > 0){
			r = a%b;
			a = b;
			b = r;
		}
		return a;
		//gcd(30,20) = gcd(20,10) = gcd(10,0) => return a ( khi b == 0 )
	}
}
int main(){
	int n; scanf("%d", &n);
	int a[n];
	nhapMang(a,n);
	int x; scanf("%d", &x);
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(gcd_chiaDu(a[i], x) == 1){
			cnt++;
		}
	}
	printf("%d\n", cnt);
	for(int i = 0; i < n; i++){
		if(gcd_chiaDu(a[i], x) == 1){
			printf("%d ", a[i]);
		}
	}
}
