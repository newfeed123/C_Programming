#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int tat_Xanh, tat_Do;
	cin>>tat_Xanh>>tat_Do;
	int min = tat_Do;
	if(tat_Xanh < min)
		min = tat_Xanh;
	cout<<min<<" "<<abs(tat_Do-tat_Xanh)/2;
}
