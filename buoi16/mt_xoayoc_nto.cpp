#include<iostream>
#include<math.h>
using namespace std;
int prime[100];
int nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return 0;
	}
	return n > 1;
}
void sinh_so_nt(){
	//100 so => ko can sang
	int cnt = 0, i = 0;
	for(int i = 0; i <= 100; i++){
		if(nt(i))
			prime[cnt++] = i;
	}
}
int main(){
	int n;
	cin>>n;
	int a[n][n];
	int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1;
	int cnt = 0;
	sinh_so_nt();
	while(h1 <= h2 && c1 <= c2){
		for(int i = c1; i <= c2; i++)
			a[h1][i] = prime[cnt++];
		h1++;
		for(int i = h1; i <= h2; i++)
			a[i][c2] = prime[cnt++];
		c2--;
		for(int i = c2; i >= c1; i--)
			a[h2][i] = prime[cnt++];
		h2--;
		for(int i = h2; i >= h1; i--)
			a[i][c1] = prime[cnt++];
		c1++;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout<<a[i][j]<<" ";	
		}
		cout<<endl;
	}
}
