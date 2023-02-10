#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int csGiam(int n){
	//4321
	while(n > 10){
		int tmp1 = n % 10;
		int tmp2 = (n/10) % 10;
		if(tmp1 >= tmp2)
			return 0;
		n /= 10;
	}
	return 1;
}
int main(){
	int t; cin>>t;
	while(t--){
		int a, b;cin>>a>>b;
		int cnt = 0;
		for(int i = a; i <= b; i++){
			if(csGiam(i))
				cnt++;
		}
		cout<<cnt<<endl;
	}
}
