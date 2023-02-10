#include<stdio.h>
#include<bits/stdc++.h>

struct sv{
	//thuoc tinh , class thi them phuong thuc
	char ten[50];
	float diem;
};
int main(){
//	sv a;//khai bao sv a
//	printf("nhap ten sv : ");
//	gets(a.ten);
//	printf("nhap diem : ");
//	scanf("%f", &a.diem);
//	printf("ten sinh vien la : %s\n", a.ten);
//	printf("diem sinh vien la : %.2f\n", a.diem);
	
	sv ds[100];//mang dssv , moi sv co 2 thuoc tinh
	int n;
	printf("nhap so luong sv : ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("nhap ten sinh vien : ");
		getchar();
		gets(ds[i].ten);
		printf("nhap diem cho sv : ");
		scanf("%f", &ds[i].diem);
	}
	printf("-----------------------------------------\n");
	for(int i = 0; i < n; i++){
		printf("Ten : %s\n", ds[i].ten);
		printf("Diem : %.2f\n", ds[i].diem);
	}
}
