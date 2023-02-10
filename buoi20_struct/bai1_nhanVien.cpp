#include<bits/stdc++.h>
using namespace std;

struct date{
	int ngay, thang, nam;
};
struct nv{
	char hoTen[30];
	date ngaySinh;//struct moi
	float luong;
	int gioiTinh;
};

nv nhap(){
	nv x;
	printf("nhap ho va ten : ");
	gets(x.hoTen);
	printf("nhap ngay/thang/nam sinh : ");
	scanf("%d%d%d", &x.ngaySinh.ngay, &x.ngaySinh.thang, &x.ngaySinh.nam);
	printf("nhap luong : ");
	scanf("%f",&x.luong);
	printf("nhap gioi tinh (0. nam 1. nu) : ");
	scanf("%d", &x.gioiTinh);
	getchar();
	return x;
}

//cach nhop thu 2 : truen con tro
void nhap_2(nv *x){
	//truyen nv x vao de thay doi x=> dung con tro
	printf("nhap ho va ten : ");
	gets(x->hoTen);
	printf("nhap ngay/thang/nam sinh : ");
	scanf("%d%d%d", &x->ngaySinh.ngay, &x->ngaySinh.thang, &x->ngaySinh.nam);
	printf("nhap luong : ");
	scanf("%f",&x->luong);
	printf("nhap gioi tinh (0. nam 1. nu) : ");
	scanf("%d", &x->gioiTinh);
	getchar();
}
void liet_ke(nv a[], int n){
	
}

void in(nv x){
	printf("-------------------------------\n");
	printf("Ho ten %s\n", x.hoTen);
	printf("ngay sinh : %d/%d/%d\n", x.ngaySinh.ngay, x.ngaySinh.thang, x.ngaySinh.nam);
	printf("luong : %.2f\n", x.luong);
	if(x.gioiTinh){
		printf("gioi tinh : nu\n");
	}
	else
		printf("gioi tinh : nam\n");
	printf("-------------------------------\n");
}

int cmp(const void *a, const void *b){
	nv *x = (nv*)a;
	nv *y = (nv*)b;
	if(x->ngaySinh.nam > y->ngaySinh.nam)
		return -1;
	else
		return 1;
}
int main(){
	int n;
	printf("nhap so luong nhan vien : ");
	scanf("%d", &n);
	getchar();
	nv a[100];
	for(int i = 0; i < n; i++){
		a[i] = nhap();//return ve 1 nv roi gan cho a[i]
		nhap_2(&a[i]);//cach nhap thu 2 , truyen dia chi cua nv a[i]
	}
	for(int i = 0; i < n; i++)
		in(a[i]);
	
	printf("nhan vien tren 40 tuoi : \n");
	for(int i = 0; i < n; i++){
		if(2021 - a[i].ngaySinh.nam > 40){
			in(a[i]);
		}
	}
	
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(a[i].luong > 1000000)
			++cnt;
	}
	printf("nhan vien luong tren 1 trieu : %d", cnt);
	
	printf("\nsx giam dan theo nam sinh : \n");
	qsort(a,n,sizeof(nv), cmp);
	for(int i = 0; i < n; i++){
		in(a[i]);
	}
	
}


