#include<iostream>
#include<math.h>
using namespace std;
int a[101];
void sang(){
	for(int i = 0; i < 101; i++)
		a[i] = 1;
	a[0] = 0;
	a[1] = 0;
	for(int i = 2; i <= sqrt(101); i++){
		if(a[i] == 1){
			for(int j = i*i; j <= 101; j += i){
				a[j] = 0;
			}
		}
	}	
}
int main(){
	int t; cin>>t;
	sang();
//	for(int i = 0; i <= 101; i++)
//		cout<<i<<" : "<<a[i]<<endl;
	while(t--){
		int n;cin>>n;
		int b[n];
		for(int i = 0; i < n; i++)
			cin>>b[i];
		int cnt[101] = {0};
//		n 5
//		i  0 1 2 3 4
//		b 1 3 5 5 13
//		a 
//		cnt	
		for(int i = 0; i < n; i++){
			if(a[b[i]] == 1){
				cnt[b[i]]++;
			}
		}
		for(int i = 0; i <= 101; i++){
			if(cnt[i])
				cout<<i<<" xuat hien "<<cnt[i]<<" lan\n";
		}
	}
}
