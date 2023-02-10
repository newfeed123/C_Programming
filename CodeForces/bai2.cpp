#include<iostream>

using namespace std;

int main(){
	//con voi: co the buoc 1 ,2 , 3, 4 hoac 5 buoc
	// tim so lan con voi can di chuyen den x
	//vd x = 50 => can 10 buoc
	//x = 24 => can 5 buoc
	// n / x thi so du se thuoc tu 0 -> x-1
	// vay n / 5 thi so du se tuoc tu 0 -> 4
	// n chia het cho 5 thi so buoc se la n/5
	//n khong chi het cho 5 thi so buoc se la n/5 + 1 . ( + 1 o day la con 1 buoc de thuoc ve so du )
	int n; cin>>n;
	if(n % 5 == 0){
		cout<<n/5;
	}
	else
		cout<<n/5 + 1;
}
