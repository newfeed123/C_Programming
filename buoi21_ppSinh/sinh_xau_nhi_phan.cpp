#include<bits/stdc++.h>
using namespace std;

int a[100], n, ok = 1;
//a[1] : luu bit 1 .... a[n] : luu bit 
//ok : check xem da la cau hinh cuoi cung chua
void init(){
	//thiet lao cau hinh dau tien
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	} 
}
void next(){
	//xet tu cuoi ve dau
	int i = n;
	
	//di tim bit 0 dau tien
	//neu gap bit 1 thi chuyen no thanh 0 va dich sang trai de tim tiep
	//neu gap 0 -> break -> doi no thanh 1 va sao chep phan con lai
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	//sau vong lap while -> tim dc chi so i ma a[i] = 0
	//hoc sau vong lap while -> i = 0 vi tat ca a[i] = 1 (cau hinh cuoi cung 1.....1)
	if(i == 0){
		ok = 0;//gan ok = 0 neu no la cau hinh cuoi cung
	}
	else
		a[i] = 1; //chuyen 0 ->1
}
int main(){
	cin>>n;
	init();//khoi tao cau 
	while(ok == 1){ //neu chua phai cau hinh cuoi cung
		for(int i = 1; i <= n; i++){
			cout<<a[i]<<" "; //in cau hinh hien tai
		}
		cout<<endl;
		next();//sinh cau hinh ke tiep
	}
	
}


