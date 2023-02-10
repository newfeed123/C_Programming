#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		int dem = 0;
		if(a%b == 0)
			cout<<dem<<endl;
		else{
			while(a%b){
				a++;
				dem++;
			}
			//neu a%b == 0 thi dung while va cout
			cout<<dem<<endl;
		}
	}
}
