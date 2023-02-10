#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
float nCK(int n, int k){
	//int res += pow(-1,n)*n;
	if(k == 0 || n == k)
		return 1;
	return 1.0*(nCK(n-1,k-1)+nCK(n-1,k));
}
int main(){
	int n,k;
	cin>>n>>k;
	float res = nCK(n,k);
	cout<< setprecision(2)<<fixed <<res;
}
