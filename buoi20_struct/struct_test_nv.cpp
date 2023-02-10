#include<bits/stdc++.h>

struct nv{
	char ten[100];
	float luong;
};

int cmp_qsort(const void *a, const void *b){
	nv *x = (nv*)a;
	nv *y = (nv*)b;
	if(x->luong < y->luong)
		return -1;
	else
		return 1;
}
int main(){
	int n;
	printf("nhap so luong nhan vien : ");
	scanf("%d", &n);
	getchar();
	nv ds[n];
	for(int i = 0; i < n; i++){
		printf("nhap ten nhan vien so %d : ",i+1);
		gets(ds[i].ten);
		printf("nhap luong nhan vien so %d : ",i+1);
		scanf("%f", &ds[i].luong);
		getchar();
	}
	printf("---------DSNV cty VNG-------\n");
	for(int i = 0; i < n; i++){
		printf("ten nhan vien so %d : %s\n",i+1, ds[i].ten);
		printf("luong nhan vien so %d : %.2f\n",i+1, ds[i].luong);	
	}
	
	float sum_luong = 0;
	for(int i = 0; i < n; i++){
		sum_luong += ds[i].luong;
	}
	printf("tong luong nhan vien : %f\n", sum_luong);
	
	float luong_max = 0;
	int pos = -1;
	for(int i = 0; i < n; i++){
		if(ds[i].luong > luong_max){
			luong_max = ds[i].luong;
			pos = i;	
		}
	}
	printf("nhan vien so %d co luong cao nhat la : %.2f\n", pos+1, luong_max);
	
	//sx luong tang dan , sx chen selection sort
//	for(int i = 0; i < n; i++){
//		int vt_min = i;
//		for(int j = i+1; j < n; j++){
//			if(ds[j].luong < ds[vt_min].luong)
//				vt_min = j;
//		}
//		nv tmp = ds[i];
//		ds[i] = ds[vt_min];
//		ds[vt_min] = tmp;
//	}

	//sx luong tang dan , sx quick_sort_cmp
	qsort(ds,n,sizeof(nv),cmp_qsort);
	printf("---------DSNV cty VNG luong tang dan-------\n");
	for(int i = 0; i < n; i++){
		printf("ten nhan vien so %d : %s\n",i+1, ds[i].ten);
		printf("luong nhan vien so %d : %.2f\n",i+1, ds[i].luong);	
	}
}
