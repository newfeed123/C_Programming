#include<iostream>

using namespace std;
// tong 1 -> n = n*(n+1)/2
int main(){
	// n=34
	//5 + 10 + 15 +20+ 25 + 30 = 5(1+2+3+4+5+6)
	// 6 = n/5 chia int
	//tinh tong tu 1 -> n/5 roi lay tong*5 
	int n;cin>>n;
	int tmp = n/5;
	int tong = tmp*(tmp+1)/2;
	cout<<tong*5;
}
