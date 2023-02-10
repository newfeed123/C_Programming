#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n, m;cin>>n>>m;
		int a[n], b[m];
		int save[m+n] = {0};//luu tat ca cac gia tri cua ca 2 mang vao 1 mang
		int cnt_save = 0;
		for(int i = 0; i < n; i++){
			cin>>a[i];
			save[cnt_save++] = a[i];
		}
		for(int i = 0; i < m; i++){
			cin>>b[i];
			save[cnt_save++] = b[i];
		}
		//tim max trong mang save de lay ra chi so cuoi cung trong mang check;
		int max = -1e9;
		for(int i = 0; i < m+n; i++){
			if(max < save[i])
				max = save[i];
		}
		int check[max+1] = {0};//mang check  : check xem so lan xuat hien cua cac phan tu trong mang save
		for(int i = 0; i < m+n; i++){
			check[save[i]]++;
		}
		for(int i = 0; i < max+ 1; i++){
			if(check[i] > 0){
				//xuat hien it nhat 1 lan o ca 2 mang a va b : mang hop
				cout<<i<<" ";
			}
		}
		cout<<endl;
		for(int i = 0; i < max + 1; i++){
			if(check[i] > 1){
				//xuat hien it nhat 2 lan o ca 2 mang a va b : mang giao
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}
