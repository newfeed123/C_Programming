#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n; cin>>n;
	int index[100001] = {0};//mang danh dau nhung vi tri nao co gia tri da xuat hien o trc do
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n; i++){
		if(index[i] == 0){//phan tu thu i chua dc in ra
			int cnt = 1;//check xem nhung thang dung sau no co gia tri trung nhau ko
			for(int j = i+1; j < n; j++){
				if(a[i] == a[j]){
					cnt++;
					index[j] = 1;
				}	
			}
			if(cnt > 1)
				cout<<a[i]<<" ";	
		}
	}

}
