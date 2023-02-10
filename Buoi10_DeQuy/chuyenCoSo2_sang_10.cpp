#include<stdio.h>
int a[100];
int chuyenHe2_sang_10(int n){
	int dec = 0, b = 1;
	while(n){
		int x = n % 10;
		dec += x * b;
		b *= 2;
		n /= 10;
	} 
	return dec;
}
void chuyenHe10_sang_2(int n){
	int i = 0;
	while(n){
		int r = n%2;
		a[i] = r;
		i++;
		n /= 2;
	}
	for(int j = i-1; j >= 0; j--){
		printf("%d  ",a[j]);
	}
}
void chuyenHe10_sang_16(int n){
	int a[100];
	int dem = 0;
	while(n){
		a[dem] = n%10;
		dem++;
		n /= 10;
	}
	for(int i = dem-1; i >= 0; i--){
		if(a[i] >= 10 && a[i] <= 15){
			if(a[i] == 10)
				printf("A ");
			else if(a[i] == 11)
				printf("B ");
			else if(a[i] == 12)
				printf("C ");
			else if(a[i] == 13)
				printf("D ");
			else if(a[i] == 14)
				printf("E ");
			else if(a[i] == 15)
				printf("F ");
		}
		else 
			printf("%d ",a[i]);
	}
}
int main(){
	int n;
	scanf("%d",&n);
//	printf("%d",chuyenHe2_sang_10(n));
//	scanf("%d",&n);
//	int a[n];
//	for(int i = 0; i < n; i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i = 0; i < n; i++){
//		printf("%d\n",a[i]);
//	}
	chuyenHe10_sang_2(n);
}
