#include<stdio.h>
#include<math.h>
void nhapMang(int a[], int n){
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

void xuatMang(int a[], int n){
	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);	
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	int b[n];
	nhapMang(a,n);
	int max1 = -1e9, max2 = -1e9;
	
	//neu có 2 gia tri max bang nhau thi in 2 max
	for(int i = 0; i < n; i++){
		if(a[i] > max1){
			max2 = max1; //gan max1 cu cho max2
			max1 = a[i]; //tim dc max1 moi
			
		}
		else if(a[i] > max2) //neu ko tim dc gia tri > max 1 nhung co gia tri > max 2 => gan max2 là a[i]
			max2 = a[i];
	}
	//in 2 gia tri max khac nhau
	for(int i = 0; i < n; i++){
		if(a[i] > max1){
			max2 = max1; //gan max1 cu cho max2
			max1 = a[i]; //tim dc max1 moi
			
		}
		else if(a[i] > max2 && a[i] != max1) 
			max2 = a[i];
	}
	if(max2 == -1e9)//ko tim dc max2 , vd : 9 9 9 9 9 9
		max2 = -1;
//	printf("%d ", max1);
//	printf("%d", max2);
	
	//MIN1 , MIN2 , vt1, vt2
	int min1 = 1e9, min2 = 1e9;
	int pos1 = 0, pos2 = 0;
	for(int i = 0; i < n; i++){
		if(a[i] < min1){
			min2 = min1;
			min1 = a[i];
			pos1 = i;
		}
		else if(a[i] < min2 && a[i] != min1){
			min2 = a[i];
			pos2 = i;
		}
	}
	printf("%d\n", pos1+1);
	printf("%d\n", pos2+1);
}
