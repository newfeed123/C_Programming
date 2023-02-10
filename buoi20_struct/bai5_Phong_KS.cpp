#include<bits/stdc++.h>
using namespace std;

struct date{
	int ngay, thang, nam;
};
struct phong{
	char maPhong[20];
	char tenPhong[20];
	float gia;
	int soGiuong;
	int status;
};
void nhap_n(phong a[], int n){
	for(int i = 0; i < n; i++){
		printf("nhap thong tin phong thu %d : \n", i+1);
		printf("nhap ma phong : ");
		gets(a[i].maPhong);//gets da xu lý enter
		printf("nhap ten phong : ");
		gets(a[i].tenPhong);
		printf("nhap gia : ");
		scanf("%f", &a[i].gia);
		printf("nhap so giuong : ");
		scanf("%d", &a[i].soGiuong);
		printf("nhap tinh trang phong (0 : trong , 1 : ban) : ");
		scanf("%d", &a[i].status);
		getchar();
	}
}
void in_n(phong a[], int n){
	printf("\n------------------------------\n");
	for(int i = 0; i < n; i++){
		printf("thong tin phong thu %d : \n", i+1);
		printf("ma phong : %s\n", a[i].maPhong);
		printf("ten phong : %s\n", a[i].tenPhong);
		printf("gia : %.2f\n", a[i].gia);
		printf("so giuong : %d\n", a[i].soGiuong);
		if(a[i].status){
			printf("status : phong bi ban\n");
		}
		else
			printf("status : phong trong\n");
		printf("\n------------------------------\n");
	}
	printf("\n------------------------------\n");
}
int cmp(const void *a, const void *b){
	phong *x = (phong*)a;
	phong *y = (phong*)b;
	if(x->gia < y->gia)
		return -1;
	else
		return 1;
}
int main(){
	int n;
	printf("nhap so luong : ");
	scanf("%d", &n);
	phong a[n];
	getchar();
	nhap_n(a, n);
	in_n(a, n);
	
	printf("liet ke phong trong \n");
	for(int i = 0; i < n; i++){
		if(a[i].status == 0){
			printf("thong tin phong thu %d : \n", i+1);
			printf("ma phong : %s\n", a[i].maPhong);
			printf("ten phong : %s\n", a[i].tenPhong);
			printf("gia : %.2f\n", a[i].gia);
			printf("so giuong : %d\n", a[i].soGiuong);
		}
	}
	qsort(a,n,sizeof(phong), cmp);
	printf("\nS?p x?p phong theo gia tang d?n \n");
	in_n(a,n);
}


