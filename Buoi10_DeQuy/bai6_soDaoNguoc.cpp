#include<iostream>
using namespace std;
void rev(int n){
	if(n > 0){
		int r = n%10;
		cout<<r;
		return rev(n/10);
	}
}
int main(){
	int n;cin>>n;
	rev(n);
}
