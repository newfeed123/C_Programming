#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		float a[4];
		for(int i = 0; i < 4; i++)
			cin>>a[i];
		cout<<fixed<<setprecision(4)<<sqrt(pow(a[0]-a[2],2) + pow(a[1]-a[3],2))<<endl;	
	}
}
