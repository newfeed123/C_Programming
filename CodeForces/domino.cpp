#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int res = n/2 * m;
	if(n % 2 ==1){
		res = res + m/2;	
	}
	cout<<res;
}
