#include<iostream>
#include<math.h>
using namespace std;
int demCS(int n){
	int cnt = 1;
	while(n > 10){
		//123 
		cnt++;
		n /= 10;
	}
	return cnt;
}
int a_mu_b(int a, int b){
	int res = 1;
	for(int i = 0; i < b; i++)
		res *= a;
	return res;
}
int check_Cs_dau_la_cs_le(int n){
	while(n>10){
		n /= 10;
	}
	if(n % 2 == 1)
		
}
int main(){
	int n; cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n; i++){
		if((a[i] / a_mu_b(10,demCS(a[i])-1)) % 2 != 0){
			cout<<a[i]<<" ";
		}
	}
}
