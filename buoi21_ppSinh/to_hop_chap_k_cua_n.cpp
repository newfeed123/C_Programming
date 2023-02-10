#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], ok = 1;
void init(){
	for(int i = 1; i <= k; i++)
		a[i] = i;
}
void next(){
	int i = k;//bat dau tu ben phai
	while(i >= 1 && a[i] == n-k+i){
		//a[i] da dat gia tri max thi dich sang trai
		--i;
	}
	//sau while : neu i == 0 -> no da la cau hinh cuoi cung a[i] = n-k+i
	if(i == 0)
		ok = 0;
	else{
		a[i]++;
		//duyet tu i+1 -> k de tang a[i] len 1 don vi
		for(int j = i+1; j <= k; j++){
			a[j] = a[j-1] + 1;//tang dan tu a[i] len 1 don vi
		}
	}
	
}
int main(){
	cin>>k>>n;
	init();
	while(ok){
		for(int i = 1; i <= k; i++)
			cout<<a[i]<<" ";
		cout<<endl;
		next();
	}
}


