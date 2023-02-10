#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int nto(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return 0;
	}
	return n > 1;
}
int main(){
	int n; cin>>n;
	int a[n];
	//int b[n] = {0};//khoi tao het bang 0
	for(int i = 0; i < n; i++){
		cin>>a[i];
//		if(nto(a[i]))
//			b[a[i]]++;
	}
//	for(int i = 0; i < n; i++){
//		if(b[i] >= 1){
//			cout<<i<<" "<<b[i]<<endl;
//		}
//	}

	//khong dung counting_arr vi neu dau bai cho qua 6 chua so
	sort(a,a+n);
	for(int i = 0; i < n; i++){
		if(nto(a[i])){
			int cnt = 1;
			// 2 2 2 2
			while(i < n && a[i] == a[i+1]){
				cnt++;
				i++;//chay qua het nhung phan tu giong a[i] dung canh nhau, for tiep theo 
			}
			cout<<a[i]<<" "<<cnt<<endl;
		}
	}
}
