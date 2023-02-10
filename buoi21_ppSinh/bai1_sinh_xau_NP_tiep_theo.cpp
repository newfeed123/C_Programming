#include<bits/stdc++.h>
using namespace std;

void next(char c[]){
	//bat dau tu bit cuoi cung
	int i = strlen(c)-1;
	while(i >= 0 && c[i] == '1'){
		c[i] = '0';
		--i;
	}
	//neu tim dc 1 ky tu 0
	if(i != -1)
		c[i] = '1';
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[1000];
		scanf("%s",c);
		next(c);
		printf("%s\n",c);
	}
}


