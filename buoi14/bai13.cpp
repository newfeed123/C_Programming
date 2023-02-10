#include<iostream>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n, k;cin>>n>>k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin>>a[i];
		}
		int dem = 0;
		for(int i = 0; i < n-1; i++){
			//n-1 : vi so cuoi cung ko can phai xet nua
			int x = a[i];
			int cnt = 0;
			while(cnt < n){
				if(cnt != i){
					if(k == x + a[cnt]){
						//cout<<"k = "<<k<<" = "<<x + a[cnt]<<"* ";
						dem++;
						//cout<<cnt<<". ";	
					}	
				}
				cnt++;
			}
		}
		cout<<dem<<endl;
	}	
}	
