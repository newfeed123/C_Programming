#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,b,soBuoc_cho;cin>>a>>b>>soBuoc_cho;
	int soBuoc_toiThieu = abs(a) + abs(b);
	if(soBuoc_cho < soBuoc_toiThieu)
		cout<<"No";
	else{
		//neu no cho du buoc
		int r = soBuoc_cho-soBuoc_toiThieu;
		if(r % 2 == 0)
			cout<<"Yes";
		else
			cout<<"No";
	}
}
