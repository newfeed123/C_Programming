#include<bits/stdc++.h>
using namespace std;

int n, a[1000], ok = 1, k;
void init(){
	for(int i = 1; i <= n; i++)
		a[i] = 0;
}
void next(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if(i == 0)
		ok = 0;
	else{
		a[i] = 1;
	}
}
int dem_bit_1(){
	//co 3 bit 1 thi tong se la 3 , 2 bit 1 thi tong se la 2
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		cnt += a[i];
	}
	return cnt == k;//sp sanh voi k neu dung bang k thi return 1 
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ok = 1;
		scanf("%d%d", &n, &k);
		init();
		while(ok){
			if(dem_bit_1()){
				for(int i = 1; i <= n; i++)
					printf("%d", a[i]);	
				printf("\n");
			}
			next();
		}
	}
}


