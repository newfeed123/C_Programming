#include<bits/stdc++.h>
using namespace std;

struct diem{
	int x;
	int y;
};
void nhap_1(diem &x){
	printf("nhap toa do x : ");
	scanf("%d", &x.x);
	printf("nhap toa do y : ");
	scanf("%d", &x.y);
}
void nhap_n(diem a[], int n){
	printf("\n---------------------------------\n");
	for(int i = 0; i < n; i++){
		printf("nhap diem thu %d: \n", i+1);
		nhap_1(a[i]);
	}
	printf("\n---------------------------------\n");
}

void in_1(diem x){
	printf("toa do : ( %d  %d ) \n", x.x, x.y);
}
void in_n(diem a[], int n){
	printf("\n---------------------------------\n");
	for(int i = 0; i < n; i++){
		printf("toa do diem thu %d : \n", i+1);
		in_1(a[i]);
	}
	printf("\n---------------------------------\n");
}
int diem_thuoc_goc_I(diem &a){
	if(a.x > 0 && a.y > 0)
		return 1;
	return 0;
}
void in_diem_thuoc_goc_I(diem a[], int n){
	printf("\n---------------------------------\n");
	printf("\n cac diem thuoc goc phan tu thu nhat: \n");
	for(int i = 0; i < n; i++){
		if(diem_thuoc_goc_I(a[i])){
			printf("diem %d : ", i+1);
			in_1(a[i]);	
		}
	}
	printf("\n---------------------------------\n");
}

int khoang_cach_den_O(diem &x){
	int kc = sqrt(pow(x.x,2) + pow(x.y,2));
	return kc;
}
void sx_theo_kc(diem a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(khoang_cach_den_O(a[i]) < khoang_cach_den_O(a[j])){
				diem tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

void max_tung_do(diem a[], int n){
	diem res;
	int max = -1e9;
	for(int i = 0; i < n; i++){
		if(a[i].y > max){
			max = a[i].y;
			res = a[i];
		}
	}
	printf("\ndiem co tung do max : (%d , %d)", res.x, res.y);
}
int main(){
	int n; 
	printf("nhap so luong diem : ");
	scanf("%d", &n);
	diem a[n];
	nhap_n(a, n);
	in_n(a, n);
	in_diem_thuoc_goc_I(a,n);
	printf("sx theo kc den goc toa do : \n");
	sx_theo_kc(a,n);
	in_n(a,n);
	max_tung_do(a,n);
}


