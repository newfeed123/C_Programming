#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,m, a;
	cin>>n>>m>>a;
	int x1, x2;
	
	if(n % a == 0)
		x1 = n/a;
	else	
		x1 = n/a + 1;
	
	if(m % a == 0)
		x2 = m/a;
	else
		x2 = m/a + 1;
	
	cout<<1LL*x1*x2;
}
