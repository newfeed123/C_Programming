#include<iostream>
using namespace std;
int CS_dauTien_cua_n(int n){
	if(n >= 1 && n <=9)	
		return n;
	return CS_dauTien_cua_n(n/10);
}
int main(){
	int n;cin>>n;
	cout<<CS_dauTien_cua_n(n);
}
