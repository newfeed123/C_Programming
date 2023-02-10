#include<iostream>
using namespace std;

int main(){
	char c;
	cin>>c;
	fflush(stdin);
	
	if(c >= '0' && c <= '9'){
		if(c > '5')
			cout<<"Greater";
		else
			cout<<"Smaller";
	}
	else
		cout<<"Invalid input";
}
