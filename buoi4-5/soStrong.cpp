#include<iostream>
using namespace std;
int giaithua(int n){
	if(n < 2)
		return 1;
	return giaithua(n-1)*n;
}
void lietKe_Doan(int a, int b){
	int max = 0, min = 0;
	int sum = 0;
	int check = 0;
	if(a > b){
		max = a;min= b;
	}
	else{
		max = b; min = a;
	}
	for(int i = min; i <= max; i++){
		sum = 0;//reset sum ve 0 sau moi vong lap
		int save = i;//luu sang bien khac de ktra , se ko bi mat i vi sau se con i++
		while(save > 0){
			int tmp = save % 10;
			sum += giaithua(tmp);
			save /= 10;// chia cho 10 => trc do can gan lai
		}
		if(sum == i){
			check = 1;
			cout<<i<<" ";
		}
	}
	if(check == 0)
		cout<<"0";
}
int main(){
	int a, b; cin>>a>>b;
	lietKe_Doan(a,b);	
}
