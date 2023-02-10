#include<iostream>
#include<math.h>
using namespace std;
int thuaSo_Nto_thuK(int n, int k){
	int dem = 0;
	int save = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				dem++;
				n /= i;
				if(dem == k){
					return i;
				}
			}
		}
	}
	if(n > 1){
		dem++;
		if(dem == k)
			return n;
	}
	return -1;
}
int main(){
	int n,k;
	cin>>n>>k;
	cout<<thuaSo_Nto_thuK(n,k);
}
