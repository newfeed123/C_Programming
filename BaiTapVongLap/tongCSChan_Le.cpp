#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int SL_chan = 0, SL_le = 0;
	//1234
	while(n > 0){
		int tmp = n%10;
		if(tmp % 2 == 0){
			SL_chan++;			
		}

		else{
			SL_le++;		
		}
		n /= 10;
	}	
	cout<<SL_chan<<" "<<SL_le;
}
