#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	int max1 = -1e9-1, max2 = -1e9-1; // -1 hoac +1 vi neu test dau bai cho -1e9
	int min1 = 1e9+1, min2 = 1e9+1; //TH 2 tich 2 so am co the lon nhat vd -99 x -99
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n; i++){
		if(a[i] > max1){
			max2 = max1;
			max1 = a[i];
		}
		else if(a[i] > max2){
			max2 = a[i];
		}
		if(a[i] < min1){
			min2 = min1;
			min1 = a[i];
		}
		else if(a[i] < min2){
			min2 = a[i];
		}
	}
	cout<<max(max1*max2*1ll, min1*min2*1ll);
}
