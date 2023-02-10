#include<iostream>
using namespace std;
int ktra_NTo(int n){
	if(n < 2)
		return 0;
	else{
		for(int i = 2; i <= n/2; i++){
			if(n % i == 0)
				return 0;
		}
		return 1;
	}
}
void in_Nto_nhoHon_n(int n){
	for(int i = 2; i <= n; i++){
		if(ktra_NTo(i))
			cout<<i<<" ";
	}
}
int main(){
	int n;cin>>n;
	in_Nto_nhoHon_n(n);
}

