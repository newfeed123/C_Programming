#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	float S;
	for(int i = 2; i <= 2*n; i = i + 2){
		S += (float)1/i;
	}
	cout<<S;
}
