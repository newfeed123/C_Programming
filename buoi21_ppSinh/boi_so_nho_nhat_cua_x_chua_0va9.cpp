#include<bits/stdc++.h>
using namespace std;
int n, a[100], ok = 1;
long long res[501];//dung de luu boi so (min va gom cac chu so 0 hoac 9 ) cua cac so tu 1 -> 500
void init(){
	for(int i = 1; i <=n ; i++)
		a[i] = 0;
}
void next(){
	int i = n; 
	while(i >= 1 && a[i] == 9){
		a[i] = 0;
		i--;
	}
	
	if(i == 0)
		ok = 0;
	else{
		a[i] = 9;
	}
}
long long convert(){
	int res = 0;
	for(int i = 1; i <= n; i++)
		res = res*10 + a[i];
	return res;
}
void solve(){
	int cnt = 0;
	int do_dai = 1;//do dai bit
	while(cnt < 500){
		n = do_dai;
		ok = 1;
		while(ok){
			//binh thuong la se for() de in ra cau hinh hien tai
			long long x = convert(); //chuyen cau hinh ve dang so
			if(x != 0){
				//xet trong khoang j tu 1 den 500 kiem tra xem x có là boi cua j ko ?
				for(int j = 1; j < 501; j++){
					if(res[j] == 0 && x % j == 0){
						res[j] = x;
						++cnt;//tang len khi tim thay dc 1 boi so ung voi so j
					}
				}
			}
			next();//sinh cau hinh ke tiep
		}
		++do_dai;//tang dan do dai bit len de tim boi
	}
}
int main(){
	int t;scanf("%d",&t);
	solve();
	while(t--){
		int x;
		scanf("%d", &x);
		printf("%d\n", res[x]);	
	}
}


