#include<iostream>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int cnt[100001] = {0};//dem cac so tu 0 -> 10^5
		//int index = 0;
		for(int i = 0; i < n; i++){
			cin>>a[i];
			cnt[a[i]]++;
		}
		for(int i = 0; i < 100001;i++){
			if(cnt[i])
				cout<<i<<" xuat hien "<<cnt[i]<<" lan"<<endl;
				
			//neu muon in theo thu tu xuat hien trong mang ma de bai cho
//			if(cnt[a[i]]){ //cho nay i chi dc xet den chi so max cua mang a
//				cout<<a[i]<<" xuat hien "<<cnt[i]<<" lan"<<endl;
//				cnt[a[i]] = 0;//reset lai de tranh bi lap
//			}
		}
//		for(int i = 0; i < n; i++){
//			cin>>a[i];
//		}
//		int check[n] = {0}; //mang check xem phan tu trc day da dc xet va in ra hay chua
//		for(int i = 0; i < n; i++){
//			if(check[i] == 0){
//				int dem = 1;
//				for(int j = i+1; j < n; j++){
//					if(a[i] == a[j])
//						dem++;
//						check[j] = 1;//gan lai la dã dc xet , tuc la vi tri cua phan tu giong a[i] da dc xet
//				}
//				cout<<a[i]<<" xuat hien "<<dem<<" lan\n";		
//			}
//		}
	}
}
