#include<bits/stdc++.h>
using namespace std;

int main(){
//	int n;
//	while(scanf("%d", &n) != -1){
//		printf("%d ", n);
//	}
	
	// 2 test case : moi test gom 1 day so bat ky ( ko cho biet so luong ) -> in ra tong
	int t; scanf("%d", &t);
	while(t--){
		int sum = 0;
		int n;
		char c = ' ';
		while(c != '\n'){
			scanf("%d", &n);
			sum += n;
			c = getchar();//khu dau cach giua cac so, neu gap dau enter se ngat vong while
		}
		printf("%d\n", sum);
	}
}


