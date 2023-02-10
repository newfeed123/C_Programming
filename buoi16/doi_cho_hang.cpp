#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n, m; cin>>n>>m;
	int x, y; cin>>x>>y;
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++)
			cin>>a[i][j];
	}
	for(int j = 0; j < n; j++){
		//nhap vi tri cot la 1 -> n , doi cho 2 day so cho nhau thoi ko co j ca
		swap(a[x-1][j], a[y-1][j]);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
