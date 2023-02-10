#include<iostream>
using namespace std;

int main(){
	long long n, k;
	cin>>n>>k;
	int d = 1;
	int dem = 0;
	while(d <= n){
		for(int i = 1; i <= n; i++){
			if(i*d == k){
				dem++;
			}
		}
		d++;	
	}
	cout<<dem;
}
