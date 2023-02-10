#include<bits/stdc++.h>
using namespace std;

struct sach{
	char tenSach[20];
	char tacGia[20];
	int namXB;
};
void nhap_n(sach a[], int n){
	for(int i = 0; i < n; i++){
		printf("nhap thong tin sach thu %d : \n", i+1);
		printf("nhap ten sach : ");
		gets(a[i].tenSach);//gets da xu lý enter
		printf("nhap ten tac gia : ");
		gets(a[i].tacGia);
		printf("nhap nam XB : ");
		scanf("%d", &a[i].namXB);
		getchar();
	}
}
void in_n(sach a[], int n){
	printf("\n------------------------------\n");
	for(int i = 0; i < n; i++){
		printf("thong tin sach thu %d : \n", i+1);
		printf("ten sach : %s\n", a[i].tenSach);
		printf("ten tac gia : %s\n", a[i].tacGia);
		printf("nam XB : %d\n", a[i].namXB);
		printf("______________________________________\n");
	}
	printf("\n------------------------------\n");
}
int nam_xb_nhieu_sach_nhat(sach a[], int n){
	int res = 0;
	int max = 0;
	for(int i = 0; i < n; i++){
		int cnt = 1;
		for(int j = i+1; j < n; j++){
			if(a[i].namXB == a[j].namXB)
				cnt++;
		}
		if(cnt > max){
			max = cnt;
			res = a[i].namXB;
		}
	}
	return res;
}
int main(){
	int n;
	printf("nhap so luong : ");
	scanf("%d", &n);
	sach a[n];
	getchar();
	nhap_n(a, n);
	in_n(a, n);
	int nam_max = nam_xb_nhieu_sach_nhat(a,n);
	printf("nam %d XB nhieu sach nhat , thong tin nhung cuon sach do la : \n", nam_max);
	for(int i = 0; i < n; i++){
		if(a[i].namXB == nam_max){
			printf("ten sach : %s\n", a[i].tenSach);
			printf("ten tac gia : %s\n", a[i].tacGia);
			printf("---------------------\n");
		}
	}
}


