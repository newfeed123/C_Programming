#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n, m; cin>>n>>m;
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>a[i][j];
		}
	}
	int sum_hang = 0, sum_hang_max = -1e9, pos_hang = -1;
	for(int i = 0; i < n; i++){
		int sum_hang = 0;
		for(int j = 0; j < m; j++){
			sum_hang += a[i][j];
		}
		if(sum_hang > sum_hang_max){
			sum_hang_max = sum_hang;
			pos_hang = i;
		}
	}
	int sum_cot = 0, sum_cot_max = -1e9, pos_cot = -1;
	for(int i = 0; i < m; i++){
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
		for(int j = 0; j < m; j++){
			if(i != pos_hang && j != pos_cot)
				cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
