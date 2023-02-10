#include<bits/stdc++.h>
using namespace std;
int n, k, a[1000];
void next(){
	int i = k;
	while(i >= 1 && a[i] == n-k+i){
		--i;
	}
	if(i == 0){
		//neu la cau hinh cuoi cung , theo de bai phai in ra cau hinh dau tien
		for(int i = 1; i <= k; i++)
			a[i] = i;
	}
	else{
		a[i]++;//tang len 1 dvi
		for(int j = i+1; j <= k; j++){
			a[j] = a[j-1] + 1;//a[j] bang a[j] trc do tang them 1
		}
	}
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &k,&n);
		for(int i = 1; i <= k; i++)
			scanf("%d", &a[i]);
		next();
		for(int i = 1; i <= k; i++)
			printf("%d ", a[i]);
		printf("\n");
	}
}


