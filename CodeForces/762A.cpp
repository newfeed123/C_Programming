#include<iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int dem = 0;
	int i = 1;
	int ok = 0;
	while(i <= n){
		if(n%i == 0){
			dem++;
		}
		if(dem == k){
			ok = 1;	
			break;
		}
		i++;
	}
	if(ok)
		cout<<i;
	else
		cout<<"-1";
}
