#include<iostream>

using namespace std;
int main(){
	int n;
	cin>>n;
	int dem = 0;
	//12345
	while(n > 0){
		n /= 10;
		dem++;
	}
	cout<<dem;
}
