#include<iostream>
using namespace std;

int main(){
	char c;
	cin>>c;
	fflush(stdin);
	if(c >= '0' && c <= '9')
		cout<<"yes";
	else
		cout<<"no";
}
