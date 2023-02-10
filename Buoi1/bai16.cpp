#include<iostream>
using namespace std;

int main(){
	char c;
	cin>>c;
	fflush(stdin);
	if(c >= 'a' && c <= 'z')
		cout<<(char)(c-32);
}
