#include<iostream>
using namespace std;
int soLocPhat(int n){
	int check = 0;
	while(n){
		check = 0;
		int tmp = n%10;
		if(tmp == 0 || tmp == 6|| tmp == 8)
			check = 1;
		n /= 10;
	}
	if(check == 1)
		return 1;
	return 0;
}
int main(){
	int n;cin>>n;
	if(soLocPhat(n))
		cout<<"1";
	else
		cout<<"0";
}
