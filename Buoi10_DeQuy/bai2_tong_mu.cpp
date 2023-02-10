#include<iostream>
#include<math.h>
using namespace std;
int tich(int n){
	if(n == 1)
		return 1;
	return n*n+tich(n-1);
}
int main(){
	int n;cin>>n;
	cout<<tich(n);
}
