#include<bits/stdc++.h>
using namespace std;
int n, a[1000], ok = 1;
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
	int s;
	scanf("%d%d", &n, &s);//n la so luong to tien , cung chinh la do dai bit
	//nhap cac menh gia cac to tien trong cay atm
	int t[n+1];
	for(int i = 1; i <= n; i++)
		scanf("%d",&t[i]);
	sort(t+1, t+n);//sap xep cac to tien tang dan vi : de co so luong to tien la it nhat <=> uu tien to tien cao nhat trc 
																						//<=> xau NP sinh theo thu tu tu dien (vd : 000->001->...->011..)
	while(ok){
		//binh thuong la in cau hinh nhung o day ta se duyet xem cau hinh nhi phan nao hop ly
		int sum = 0, so_to_tien = 0;
		for(int i = 1; i <= n; i++){
			if(a[i] == 1){
				sum += t[i];//vd cau hinh hien tai la 0 1 1 , menh gia tien dc sx la 1, 4, 5 => sum = 4+5 = 9 , sau for so sanh voi so tien can rut la s
				so_to_tien++;
			}
		}
		if(sum == s){
			printf("%d\n", so_to_tien);
			return 0;
		}
		next();//neu chua phai cau hinh dung thi sinh tiep
	}
}


