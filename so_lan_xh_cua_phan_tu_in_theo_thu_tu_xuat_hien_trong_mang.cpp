#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	int cnt[n] = {0};
	for(int i = 0; i < n; i++){
		cin>>a[i];
		cnt[a[i]]++;
	}
	for(int i = 0; i < n; i++){
		if(cnt[a[i]]){
			cout<<a[i]<<" xuat hien "<<a[i]<<" lan\n";
			cnt[a[i]] = 0;//lan sau khi xet den a[i] se ko in dc nua
		}
	}
	cout<<"\----Cach 2 dung mang check vi tri-----------\ \n";
	int check_idx[n] = {0};
	for(int i = 0; i < n; i++){
		if(check_idx[i] == 0){
			int dem = 1;
			for(int j = i+1; j < n; j++){
				if(a[i] == a[j]){
					dem++;
					check_idx[j] = 1;
				}
			}
			cout<<a[i]<<" xuat hien "<<dem<<" lan\n";
		}
	}
}
