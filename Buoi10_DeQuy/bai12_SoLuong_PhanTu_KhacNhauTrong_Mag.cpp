#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
void sL_phanTu_khacNhau(int a[], int n){
	int b[n];//mang b de luu cac phan tu khac nhau cua mang a
	int count = 0;
	for(int i = 0; i < n; i++){
		int check = 0;
		for(int j = 0; j < count; j++){
			if(a[i] == b[j]){
				check = 1;
				break;	
			}
		}
		if(check == 0){
			b[count] = a[i];//luu vao mang b
			count++;
		}
	}
	//return count;
	for(int i = 0; i < count;i++){
		cout<<b[i]<<"\t";
	}
}
int dequy_solve(int a[], int n){
	if(n == -1)
		return 0;
	else{
		int ok = 1;
		for(int i = 0; i < n; i++){
			if(a[i] == a[n])
			{
				ok = 0;
				break;
			}
		}
		if(ok){
			//duyet xong nhung ok van = 1 , tuc la doan trc ko co thang nao giong no
			return 1+dequy_solve(a,n-1);
		}
		else
			//ok = 0 , tuc la co 1 thang giong voi no
			return dequy_solve(a,n-1);
	}
}
int main(){
	int n;cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
//	sL_phanTu_khacNhau(a,n);
	cout<<dequy_solve(a,n-1);
}
