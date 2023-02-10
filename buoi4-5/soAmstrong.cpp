#include<iostream>
#include<math.h>
using namespace std;

int soLuongCS(int n){
	int dem = 0;
	if(n == 0)
		return 1;
	while(n > 0){
		n /= 10;
		dem++;
	}
	return dem;
}
int amtrong(int n){
	int sum = 0;
	int x = soLuongCS(n);
	int save = n;
	while(n){
		int tmp = n % 10;
		sum += pow(tmp, x);
		n /= 10;
	}
	if(sum == save)
		return 1;
	return 0;
}
void lke_so_Astr_nhoHon_n(int n){
	for(int i = 1; i <= n; i++){
		if(amtrong(i))
			cout<<i<<" ";
	}
}
int main(){
	int n;cin>>n;
	lke_so_Astr_nhoHon_n(n);
}
