#include<iostream>
#include<math.h>
using namespace std;
int rev(int n){
	int save = n, res;
	while(n){
		int res = res*10 + n%10;
		n /= 10;
	}
	if(res == save)
		return 1;
	return 0;
}
int sumCS(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	return sum;
}
void dem_SoDep(int so_CS){
	int dem = 0;
	int i1 = pow(10,so_CS-1);
	int i2 = pow(10,so_CS)-1;
	
	for(int i = i1; i <= i2; i++){
		if( rev(i) && sumCS(i) % 10 == 0)
			dem++;
	}
	cout<<dem;
}
int main(){
	int so_CS;
	cin>>so_CS;
	//cout<<sumCS(so_CS)<<endl;
	dem_SoDep(so_CS);
}
