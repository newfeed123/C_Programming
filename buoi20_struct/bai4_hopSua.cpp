#include<bits/stdc++.h>
using namespace std;

struct date{
	int ngay, thang, nam;
};
struct hopSua{
	char nhanHieu[20];
	float trogLg;
	date d;
};
void nhap_n(hopSua a[], int n){
	for(int i = 0; i < n; i++){
		printf("nhap thong tin h.Sua %d :\n", i+1);
		printf("nhap nhan hieu : ");
		gets(a[i].nhanHieu);
		printf("nhap trong luong : ");
		scanf("%f", &a[i].trogLg);
		printf("nhap han sd : ");
		scanf("%d%d%d", &a[i].d.ngay, &a[i].d.thang, &a[i].d.nam);
		getchar();
	}
}
void in_n(hopSua a[], int n){
	printf("\n------------------------------\n");
	for(int i = 0; i < n; i++){
		printf("thong tin h.Sua thu %d : \n", i+1);
		printf("nhan hieu %s \n", a[i].nhanHieu);
		printf("trong luong %.2f \n", a[i].trogLg);
		printf("han su dung : %d / %d / %d \n", a[i].d.ngay, a[i].d.thang, a[i].d.nam);	
		printf("\n------------------------------\n");
	}
	printf("\n------------------------------\n");
}
int cmp(const void *a, const void *b){
	hopSua *x = (hopSua*)a;
	hopSua *y = (hopSua*)b;
	if(x->d.nam != y->d.nam){
		if(x->d.nam < y->d.nam)
			return -1;//tang dan
		else
			return 1;
	}
	else{
		if(x->d.thang != y->d.thang){
			if(x->d.thang < y->d.thang)
				return -1;//tang dan
			else
				return 1;
		}
		else{
			if(x->d.ngay < y->d.ngay)
				return -1;//tang dan
			else
				return 1;
		}
	}
}
int main(){
	int n;
	printf("nhap so luong : ");
	scanf("%d", &n);
	hopSua a[n];
	getchar();
	nhap_n(a, n);
	in_n(a, n);
	qsort(a,n,sizeof(hopSua), cmp);
	printf("\nS?p x?p các h?p s?a tang d?n theo h?n s? d?ng\n");
	in_n(a,n);
}


