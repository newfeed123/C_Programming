#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin>>a[i][j];
		}
	}
	int sum_cot = 0, sum_cot_max = -1e9, pos_cot = -1;
	for(int i = 0; i < n; i++){
		int sum_cot = 0;
		for(int j = 0; j < n; j++){
			sum_cot += a[j][i];
		}
		if(sum_cot > sum_cot_max){
			sum_cot_max = sum_cot;
			pos_cot = i;
		}
	}
	for(int i = 0; i < n; i++){
		cout<<a[i][pos_cot]<<" ";
	}
		cout<<endl;
}

