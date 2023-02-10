#include<iostream>

using namespace std;
int main(){
	int a = 100, b = 10;
	char c;
	cin>>c;
	switch(c){
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case 'x':
			cout<<a*b;
			break;
		case '/':
			cout<<(float)a/b;
			break;
	}
}
