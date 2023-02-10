#include<iostream>
using namespace std;

int main(){
	char c;
	cin>>c;
	fflush(stdin);
	if(c >= 'h' && c <= 'z')
		cout<<"back";
	else
		cout<<"front";
}
