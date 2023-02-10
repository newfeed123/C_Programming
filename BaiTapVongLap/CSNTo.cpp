#include<iostream>
#include<math.h>
using namespace std;
bool ktTraNTo(int n){
	bool check;
	if(n < 2)
		
}
int main(){
	long long n;cin>>n;
	int dem = 0;
	int check = 0;
	while(n > 0){
		int tmp = n % 10;
		//cout<<tmp<<"\t";
		for(int i = 2; i <= sqrt(tmp); i++){
			if(tmp % i == 0){
				check = 1;
				break;
				//cout<<"*"<<tmp<<"\t";	
			}
		}
		if(check == 1)
			dem++;
		n = n / 10;
	}
	cout<<"\n"<<dem;
}
