#include<iostream>
using namespace std;
int factorial_recursive(int n){
	if(n == 0)
		return 1;
	return n*factorial_recursive(n-1);
}
int main(){
	while(true){
		int n;
		cin>>n;
		if(n < 0 || n >= 20){
			cout<<"wrong input , retype please !!! \n";
			continue;
		}
		else{
			cout<<factorial_recursive(n);
			break;
		}
	}
	return 0;
}
