#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	float S;
	for(int i = 1; i <= n; i = i + 1){
		S += (float)pow(-1,i)*i;
	}
	cout<<S;
}
