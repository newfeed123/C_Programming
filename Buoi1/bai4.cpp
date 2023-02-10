#include<iostream>

using namespace std;

int main(){
	int thang;
	cin>>thang;
	
	if(thang < 0)
		cout<<"du lieu ko hop le";
	else{
		switch(thang){
			case(1):
				cout<<"thang mot";
				break;
			case(2):
				cout<<"thang hai";
				break;
			case(3):
				cout<<"thang ba";
				break;
			case(4):
				cout<<"thang bon";
				break;			
			case(5):
				cout<<"thang nam";
				break;
			case(6):
				cout<<"thang sau";
				break;
			case(7):
				cout<<"thang bay";
				break;
			case(8):
				cout<<"thang tam";
				break;
			case(9):
				cout<<"thang chin";
				break;
			case(10):
				cout<<"thang muoi";
				break;
			case(11):
				cout<<"thang muoi mot";
				break;
			case(12):
				cout<<"thang muoi hai";
				break;				
		}
	}
	
}
