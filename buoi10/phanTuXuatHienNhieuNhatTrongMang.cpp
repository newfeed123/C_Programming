#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	int val, fre = 0;
	for(int i = 0; i < n; i++){
		int dem = 0;//khoi tao 1 bien dem tan suat cua a[i]
		//hoac dem = 1;
		// thi j = i + 1; chi can dem nhung thang sau a[i]
		for(int j = 0; j < n; j++){
			if(a[i] == a[j]){
				dem++;
			}
		}
		//sau vong for 2 biet dc tan xuat cua a[i]
		if(dem > fre){
			fre = dem;
			val = a[i];	
		}
	}
	cout<<val<<" "<<fre;
}
