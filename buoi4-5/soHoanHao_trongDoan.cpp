#include<iostream>
#include<math.h>
using namespace std;

int soHoanHao(int n){
	int sum = 0;
	for(int i = 1; i <= n/2; i++){
		if(n % i == 0)//tim uoc
			sum += i;
	}
	if(sum == n)
		return 1;
	return 0;	
}
void soHoanHao_trongDoan(int a, int b){
	int max = 0, min = 0;
	if(a > b){
		max = a; min = b;
	}
	else{
		max = b; min = a;
	}
	for(int i = min; i <= max; i++){
		if(soHoanHao(i))
			cout<<i<<" ";
	}
}
int main(){
	int a, b;
	cin>>a>>b;
//	int x = soHoanHao(6);
//	if(x == 1)
//		cout<<"so Hoan hao";
	soHoanHao_trongDoan(a,b);
}
