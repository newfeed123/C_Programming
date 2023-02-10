#include<iostream>
using namespace std;

long long fibo[93];
void init(){
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i <= 92; i++)
		fibo[i] = fibo[i-1] + fibo[i-2];
}
int main(){
	int n; cin>>n;
	long long a[n][n];
	int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1;
	int cnt = 0;//
	init();
	while(h1 <= h2 && c1 <= c2){
		for(int i = c1; i <= c2; i++){
			a[h1][i] = fibo[cnt++];
		}
		h1++;
		for(int i = h1; i <= h2; i++)
			a[i][c2] = fibo[cnt++];
		c2--;
		for(int i = c2; i >= c1; i--)
			a[h2][i] = fibo[cnt++];
		h2--;
		for(int i = h2; i >= h1; i--)
			a[i][c1] = fibo[cnt++];
		c1++;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
