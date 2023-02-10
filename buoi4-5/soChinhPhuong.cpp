#include<iostream>
#include<math.h>
using namespace std;

long long check_SoCP(long long n){
	long long can = sqrt(n);//sqrt tra ve double nhung t chi lay phan long long
	if(can*can == n)
		return 1;
	return 0;
}
bool check_2(long long n){
	long long i = 0;
	while(i*i <= n){
		if(i*i == n)
			return true;
		++i;//neu chua tim dc thi i++
	}
	return false;
}
long long main(){
	//long long n;cin>>n;
	//cách 2 duyet den can n
//	for(long long i = 1; i <= sqrt(n); i++){
//		cout<<1LL*i*i;
//	}
	long long a,b; cin>>a>>b;
	long long dem = 0;
//	for(long long i = a; i <= b; i++){
//		if(check_2(i))
//			dem++;
//	}
//	cout<<dem;
	//cach 2 : can dau va can cuoi
	for()
}
