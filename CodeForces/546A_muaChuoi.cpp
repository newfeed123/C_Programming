#include<iostream>
using namespace std;
int main(){
	int k, w;
	long long n;
	cin>>k>>n>>w;
	int soTienPhaiTra = 0;
	for(int i = 1; i <= w; i++){
		soTienPhaiTra += k*i;
	}
	if(soTienPhaiTra > n)
		cout<<soTienPhaiTra-n;
	else
		cout<<"0";
}
