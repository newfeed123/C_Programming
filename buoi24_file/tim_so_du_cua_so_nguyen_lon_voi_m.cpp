#include<bits/stdc++.h>
using namespace std;
long long find_du(char a[], long long m){
	long long du = 0;
	for(int i = 0; i < strlen(a); i++){
		du = (du*10 + (a[i] - '0')) % m;
	}
	return du;
}
int main(){
	char a[1000];
	long long m;
	cin>>a>>m;
	long long du = find_du(a,m);
	long long du = find_du()
}


