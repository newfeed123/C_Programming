#include<iostream>
#include<math.h>
using namespace std;

int main(){
	//ax2 + bx + c = 0
	int a, b, c;
	cin>>a>>b>>c;
	int delta = pow(b,2) - 4*a*c;
	if(a == 0){
		//bx + c = 0;
		if(b == 0 && c == 0)
			cout<<"PT vo so nghiem";
		else if(b == 0 && c != 0)
			cout<<"NO";
		else{
			cout<<1.00*(-c/b);
		}
	}
	else{
		if(delta < 0)
			cout<<"NO";
		else if(delta == 0)
			cout<<1.00*(-b/2*a);
		else{
			cout<<1.01*((-b-sqrt(delta))/(2*a))<<" "<<1.01*((-b+sqrt(delta))/(2*a));
		}
	}
}
