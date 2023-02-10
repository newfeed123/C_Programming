#include<bits/stdc++.h>
using namespace std;

struct hs{
	char hoTen[30];
	float dToan, dVan, dTB;
};
hs nhap(){
	hs x;
	printf("nhap ho va ten : ");
	gets(x.hoTen);
	printf("nhap diem toan/van : ");
	scanf("%f%f", &x.dToan, &x.dVan);
	getchar();
	x.dTB = (x.dToan+x.dVan)/2;
	return x;
}
void in(hs x){
	printf("-------------------------------\n");
	printf("Ho ten %s\n", x.hoTen);
	printf("diem toan/van : %.2f %.2f\n", x.dToan, x.dVan);
	printf("diem TB : %.2f\n", x.dTB);
	printf("-------------------------------\n");

}
int cmp(const void *a, const void *b){
	hs *x = (hs*) a;
	hs *y = (hs*) b;
	if(x->dTB > y->dTB)
		return -1;//-1 0 1 :)
	else
		return 1;
}
int main(){
	printf("nhap so luong sv : ");
	int n;
	scanf("%d", &n);
	hs a[n];
	getchar();
	for(int i = 0; i < n; i++){
		a[i] = nhap();
	}
	for(int i = 0; i < n; i++){
		in(a[i]);
	}
	printf("Li?t kê các h?c sinh có di?m toán nh? hon 5 trong danh sách.\n");
	for(int i = 0; i < n; i++){
		if(a[i].dToan < 5)
			in(a[i]);
	}
	printf("Ð?m s? lu?ng h?c sinh có di?m toán và di?m van l?n hon 8 di?m trong danh sách\n");
	for(int i = 0; i < n; i++){
		if(a[i].dToan > 8 && a[i].dVan > 8)
			in(a[i]);
	}
	qsort(a,n,sizeof(hs),cmp);
	printf("\nsx giam dan theo diem TB : \n");
	for(int i = 0; i < n; i++){
		in(a[i]);
	}
}


