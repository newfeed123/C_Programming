#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<algorithm>
//neu cmp tra ve -1 , sap xep a dung trc b (a < b)
//neu cmp tra ve 1 ,sap xep a dung sau b (a > b)
// 0 la a == b
int cmp(const void *a, const void *b){
	//neu du lieu sx la int thi ep kieu ve int
	int *x = (int*) a;//ep kieu con tro void a sang con tro int
	int *y = (int*) b;
	if(*x < *y)
		return -1; //a < b , x < y , *x va *y la gia tri tai dia chi ma con tro dang tro toi
		//sap xep x truoc y
	else
		return 1;
}
int cmp_abs(const void *a, const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	if(abs(*x) < abs(*y))
		return -1;//sap xep x truoc y neu x < y
	else
		return 1;
}
int cmp_abs_so_am_dung_trc(const void *a, const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	if(abs(*x) != abs(*y)){
		if(abs(*x) < abs(*y))
			return -1;//sap xep x truoc y neu x < y
		else
			return 1;
	}
	else{
		//tri tuyet doi bang nhau
		if(*x > 0 && *y < 0)
			return 1;
		else
			return -1;
	}
}
int main(){
	int t; scanf("%d", &t);
	int a[t];
	for(int i = 0; i < t; i++)
		scanf("%d", &a[i]);
	qsort(a,t,sizeof(int),cmp);
	for(int i = 0; i < t; i++){
		printf("%d ",a[i]);
	}
}
