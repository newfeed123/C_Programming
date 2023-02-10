#include<bits/stdc++.h>
using namespace std;
int sum_cs(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	return sum;
}
int cmp(const void *a, const void *b){
	//ep kieu;
	int *x = (int*) a;
	int *y = (int*) b;
	//-1 : a dung trc b , a < b
	//0 : a hay b dung trc deu dc
	//1 : b dung trc a , b > a;
	int m = *x; //gia tri con tro x tro toi
	int n = *y;//gia tri con tro y tro toi
	if(sum_cs(m) < sum_cs(n))
		return -1;//tong_cs nho hon dung trc
	else
		return 1;
	
	
//	if(sum_cs(m) != sum_cs(n)){
//		if(sum_cs(m) < sum_cs(n))
//			return -1;//tong_cs nho hon dung trc
//		else
//			return 1;
//	}
//	else{
//		if(m > n)
//			return -1;//m xep trc n
//		else
//			return 1;
//	}
}
int cmp_chan_le(const void *a, const void *b){
	int *x = (int*) a;
	int *y = (int*) b;
	int m = *x;
	int n = *y;
	if(m%2==0 && n%2==1){
		return -1;//m la chan xep trc n le
	}
	return 1;
}
int cmp_chan_le_2(const void *a, const void *b){
	int *x = (int*) a;
	int *y = (int*) b;
	int m = *x;
	int n = *y;
	//chan xep trc le xep sau
	//2 cung chan thi xep giam dan
	//2 cung le thi xep tang dan
	if(m%2==0 && n%2==0){
		if(m > n)
			return -1;
		return 1;
	}
	if(m%2==0 && n%2!=0){
		return -1;
	}
	if(m%2!=0 && n%2!=0){
		if(m < n)
			return -1;
		return 1;
	}
	if(m%2!=0 && n%2==0){
		return 1;// m dung sau n
	}
}
int main(){
	int n; cin>>n;
	int a[n];
	for(int &x : a)
		cin>>x;
	qsort(a, n, sizeof(int), cmp);
	for(int i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}
}


