#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n ;cin>>n; //int a[n];
		int cnt[1001];
		int max_val = -1e9, min_val = 1e9;
		for(int i = 0; i < n; i++){
			int x;
			cin>>x;
			cnt[x]++;//cnt[a[i]]++
			max_val = max(max_val,x);
			min_val = min(min_val,x);
		}
		int dem = 0;
		for(int i = min_val; i <= max_val; i++){
			if(cnt[i] == 0){
				//so i chua xuat hien trong doan tu min -> max
				dem++;	
			}
		}
		cout<<dem;
		cout<<endl;
	}
}
