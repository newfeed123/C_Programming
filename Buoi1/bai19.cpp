#include<iostream>
using namespace std;

int main(){
	char c;
	cin>>c;
	fflush(stdin);
	
	if(c == 'z')
		cout<<'a';
	else if(c >= 'a' && c <'z'){
		cout<<(char)(c+1);
	}
	
	if(c == 'Z')
		cout<<'A';
	else if(c >= 'A' && c < 'Z'){
			cout<<(char)(c+1);
	}	
	
}
