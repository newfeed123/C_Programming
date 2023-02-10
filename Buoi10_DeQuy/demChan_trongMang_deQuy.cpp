#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int dem_Chan(int vtCuoi, int a[]){
	if(vtCuoi == -1)
		return 0;
	else{
		if(a[vtCuoi] % 2 == 0)
			return 1+dem_Chan(vtCuoi-1,a);
		else
			return dem_Chan(vtCuoi-1,a);
	}
}
int tong_Chan(int vtCuoi, int a[]){
	if(vtCuoi == -1)
		return 0;
	else{
		if(a[vtCuoi] % 2 == 0)
			return a[vtCuoi] + tong_Chan(vtCuoi-1,a);
		else
			return tong_Chan(vtCuoi-1,a);
	}
}
void xuatMang(int vtCuoi, int a[]){
	if(vtCuoi != -1){
		xuatMang(vtCuoi-1,a);
		cout<<a[vtCuoi]<<"\t";	
	}
}
void xuatMang_Nguoc(int vtCuoi, int a[]){
	if(vtCuoi == -1)
		return;
	else{
		cout<<a[vtCuoi]<<"\t";
		xuatMang_Nguoc(vtCuoi-1,a);	
	}
}
int main(){
	int n;cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	//cout<<dem_Chan(n-1,a);
	//cout<<tong_Chan(n-1,a);
	//xuatMang(n-1,a);
	xuatMang_Nguoc(n-1,a);
}
