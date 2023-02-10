#include<iostream>
#include<math.h>
using namespace std;
int check(int n){
	int dem_Cs = 0;
	int tmp = n;
	while(tmp){
		tmp /= 10;
		dem_Cs++;
	}
	
	int sum = 0;
	int tmp_2 = n;
	while(n){
		int r = n%10;
		sum += pow(r,dem_Cs);
		n /= 10;
	}
	if(sum == tmp_2)
		return 1;
	return 0;
}
int main(){
	int n;cin>>n;
	for(int i = 1; i <= n; i++){
		if(check(i))
			cout<<i<<"  ";
	}
}
