#include<iostream>
using namespace std;
int fibonaci_thu_n(int n){
	// 0 , 1 , 1 , 2 , 3 , 5
	int f0 = 0, f1 = 1;
	int fn = 1;
	//n == 2 -> return fn
	if(n == 1 || n == 0)
		return n;
	for(int i = 2; i < n; i++){
		f0 = f1;
		f1 = fn;
		fn = f0 + f1;
	}
	return fn;
}
int ktraSoFibo(int n){
	int i = 0;
	while(n > fibonaci_thu_n(i)){
		i++;
	}
	if(n == fibonaci_thu_n(i))
		return 1;
	return 0;
}
int cach2_ktraSoFibo(long long n){
	int f0 = 0, f1 = 1;
	long long fn = f0 + f1;
	if(n == 0 || n == 1)
		return 1;
	for(int i = 2; i <= 92; i++){
		fn = f0 + f1;
		if(n == fn)
			return 1;
		else{
			f0 = f1;
			f1 = fn;
		}
	}
}
int main(){
	int n;cin>>n;
	cout<<fibonaci_thu_n(n);
	cout<<endl<<cach2_ktraSoFibo(3);
}
