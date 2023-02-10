#include<iostream>
using namespace std;

int main(){
	char c;
	cin>>c;
	fflush(stdin);
	
	if(c >= 'a' && c <= 'z')
		cout<<c<<(char)(c-32);
	else if(c >= 'A' && c <= 'Z')
		cout<<c<<(char)(c+32);	
	
}
