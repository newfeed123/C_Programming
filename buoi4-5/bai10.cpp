#include<iostream>
#include<math.h>
using namespace std;

void dem_SoLuong(int n){
	int demLe = 0, demChan = 0;
	while(n){
		int tmp = n % 10;
		if(tmp % 2 == 0)
			demChan++;
		else
			demLe++;
		n /= 10;
	}
	if(demChan != 0)
		cout<<demChan<<" ";
	else
		cout<<"0";

	if(demLe != 0)
		cout<<demLe;
	else
		cout<<"0";
}
int main(){
	int n; cin>>n;
	dem_SoLuong(n);
}
