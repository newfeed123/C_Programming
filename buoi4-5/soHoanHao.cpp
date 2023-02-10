#include<iostream>
using namespace std;
int soHoanHao(int n){
	int sum = 0;
	for(int i = 1; i <= n/2; i++){
		if(n % i == 0)
			sum += i;
	}
	if(sum == n)
		return 1;
	return 0;
}
int main(){
	int n; cin>>n;
	cout<<soHoanHao(n);
}
