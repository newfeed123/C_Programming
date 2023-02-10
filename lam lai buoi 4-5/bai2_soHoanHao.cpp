#include<iostream>
#include<math.h>
using namespace std;
int check(int n){
	int sum = 0;
	for(int i = 1; i <= sqrt(n); i++){
		if(n % i == 0)
			sum += i + n/i;
	}
	int can = sqrt(n);
	if(can*can == n)
		sum -= can;//so chinh phuong
	if(sum - n == n)
		return 1;
	return 0;
}
int main(){
	int a, b, dem = 0;
	cin>>a>>b;
	int _min = min(a,b);
	int _max = max(a,b);
	for(int i = _min; i <= _max; i++){
		if(check(i)){
			cout<<i<<" ";
		}
	}
}
