#include<iostream>
using namespace std;
void in_thua_So_nguyenTo_1Lan(int n){
	for(int i = 2; i <= n; i++){
		int check = 1;
		while(n % i == 0){
			if(check)
				cout<<i<<" ";
			n /= i;
			check = 0;
		}
	}
	if(n > 1)
		cout<<n;
}
int main(){
	int n; cin>>n;
	in_thua_So_nguyenTo_1Lan(n);
}
