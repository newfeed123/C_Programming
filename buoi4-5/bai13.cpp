#include<iostream>
#include<math.h>
using namespace std;
int rev(int n){
	int save = n, res = 0;
	while(n){
		res = res*10 + n%10;
		n /= 10;
	}
	if(res == save)
		return 1;
	return 0;
}
int sumCS(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	return sum;
}
int chuaSo_6(int n){
	int dem = 0;
	while(n){
		int tmp = n % 10;
		if(tmp == 6)
			dem++;
		n /= 10;
	}
	if(dem >= 1)
		return 1;
	return 0;
}
int tong_CS_co_So8_cuoicung(int n){
	int x = sumCS(n);
	int hangDonVi = x % 10;
	if(hangDonVi == 8)
		return 1;
	return 0;
}
void lietKe_Doan(int a, int b){
	int max = 0, min = 0, dem = 0;
	if(a > b){
		max = a;min= b;
	}
	else{
		max = b; min = a;
	}
	for(int i = min; i <= max; i++){
		int save = i;
		if(chuaSo_6(save) && rev(save) && tong_CS_co_So8_cuoicung(save))
			cout<<save<<" ";
	}
}
int main(){
	int a, b; cin>>a>>b;
	lietKe_Doan(a,b);
	//cout<<tong_CS_co_So8_cuoicung(1);
}
