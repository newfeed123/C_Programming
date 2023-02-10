#include<bits/stdc++.h>
using namespace std;
int n, ok = 1;
int a[1000];
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
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ok = 1;
		scanf("%d", &n);
		init();//khoi tao
		while(ok){
			//printf("%s ", a);//chua phai cau hinh cuoi cung thi in ra cau hinh hien tai
			for(int i = 1; i <= n; i++){
				if(a[i] == 0)
					printf("%c", 'A');
				else
					printf("%c", 'B');
			}
			printf(" ");
			next();//sinh cau hinh ke tiep;
		}
		printf("\n");
	}
}


