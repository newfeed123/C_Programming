#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a, b, c;
	cin>>a>>b>>c;
	if(a >= b + c || b >= a + c || c >= a + b)
		cout<<"0";
	else{
		if(a==b && b==c)
			cout<<"1";
		else if(a == b||b ==c||a == c){
			if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
				cout<<"4";
			}	
			else
				cout<<"2";
		}
		else if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
			cout<<"3";
		}
		else
			cout<<"5";
	}
}
