#include<stdio.h>

int main(){
	int a, b, tong, hieu, tich;
	scanf("%d %d",&a,&b);
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	float thuong = (float)a/b;
	printf("%d %d %d %.2f",tong, hieu, tich, thuong);
}
