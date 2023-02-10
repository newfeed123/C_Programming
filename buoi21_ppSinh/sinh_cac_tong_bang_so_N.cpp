#include<bits/stdc++.h>
using namespace std;
int n, a[1000], ok = 1, k;
void init(){
	k = 1; // so luong so hang trong tong
	a[1] = n;//khoi tao cau hinh dau tien
}
void next(){
	int i = k;
	//5 = 5 = 4 1 = 
	// tim vi tri i ma a[i] != 1
	while(i >= 1 && a[i] == 1){
		--i;
	}
	if(i == 0)
		ok = 0;
	else{
		a[i]--;
		//dien tiep nhung so con thieu trong tong
		int thieu = k-i+1;
		k = i;// cap nhat lai so luong so hang trong tong = i , khi xay dung them nhung so sau thi tang them k
		//bieu dien "thieu" thong qua a[i] = bao nhieu lan a[i] va con du bao nhieu
		// thieu = q*a[i] + r
		int q = thieu / a[i]; //so luong a[i] can them vao
		int r = thieu % a[i]; // so du neu co
		if(q!=0){
			for(int j = 1; j <= q; j++){
				//duyet q lan	
				a[k+j] = a[i]; //them vao sau a[i] q lan gia tri a[i]
			}
			k += q;//cap nhat so luong so hang sau khi them q lan gia tri a[i]
		}
		if(r != 0){
			++k;
			a[k] = r;
		}
	}
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ok = 1;
		scanf("%d",&n);
		init();
		while(ok){
			for(int i = 1; i <= k; i++)
				printf("%d ",a[i]);
			printf("\n");
			next();
		}
	}
}


