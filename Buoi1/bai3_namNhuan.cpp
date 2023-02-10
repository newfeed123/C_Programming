#include<iostream>

using namespace std;

int main(){
	int nam;
	cin>>nam;
	if(nam % 400 == 0 || (nam % 4 ==0 && nam % 100 != 0))
		cout<<"1";
	else
		cout<<"0";
}
