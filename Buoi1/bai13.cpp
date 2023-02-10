#include<iostream>

using namespace std;

int main(){
	long long n;
	cin>>n;
	int csCuoi = n % 10;
	if(csCuoi == 0 && n % 3 == 0)
		cout<<"1";
	else
		cout<<"0";
}
