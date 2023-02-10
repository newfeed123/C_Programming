#include<bits/stdc++.h>
using namespace std;

int n, a[100], ok = 1;
//tim vi tri ma a[i] < a[i+1]
//tim min tu i+1 -> n nhung phai > a[i] va swap cho a[i]
//sx tang dan tu i+1 -> n

void init(){
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
}
void next(){
	int i = n-1;//xet phan tu sat cuoi cung ( i = n la cuoi cung )
	while(i >= 1 && a[i] > a[i+1]){
		//di tim i sao cho a[i] < a[i+1] thi phai dat dieu kien la a[i] > a[i+1]
		--i;
	}
	if(i == 0){
		//duyet het i = n -> 1 va tat ca a[i] > a[i+1] 
		ok = 0;//dung  , vi la cau hinh cuoi cung
	}
	else{
		int k = n;
		//can tim so lon hon a[i] ma no xuat hien dau tien;
		while(a[k] < a[i]){
			--k;//nho hon thi --k tim tiep
		}
		swap(a[i], a[k]);
		//doi xong thi day i + 1 -> n van la giam dan => dao ngc la se dc day tang dan
		
		int l = i+1, r = n;
		while(l <= r){
			int tmp = a[l];
			a[l] = a[r];
			a[r] = tmp;	
			++l;
			--r;
		}
	}
}
int main(){
	cin>>n;
	init();
	while(ok){
		for(int i = 1; i <= n; i++)
			cout<<a[i]<<" ";
		cout<<endl;
		next();
	}
}


