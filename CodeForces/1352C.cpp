#include<iostream>
using namespace std;

int main(){
	int t;
	long long n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		long long dem = 0;
		long long i = 1;
		while(true){
			if(i % n != 0){
				dem++;
				//cout<<i<<endl; cac so ko chia het cho n	
			}
			if(dem == k)
				break;	
			i++;
			//cout<<"*"<<i<<"*"<<endl;
		}
		cout<<i<<endl;
	}
}
