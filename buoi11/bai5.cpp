#include<iostream>
using namespace std;
int soDep_cs_1_9(int n){
	while(n){
		int tmp = n%10;
		if((tmp != 1 && tmp != 9))
			return 0;
		n /= 10;
	}
	return 1;
}
int check(int n){
	int c1 = 0, c9 = 0;
	while(n){
		int tmp = n%10;
		if(tmp == 9) 
			c9 = 1;
		else if(tmp == 1)
			c1 = 1;
		n /= 10;
	}
	return (c1 == 1 && c9 == 1);// chua so 1 va 9
}
int main(){
	int n; cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(check(a[i])){
			++cnt;
		}
	}
	cout<<cnt;
}
