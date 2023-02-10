#include<stdio.h>
#include<math.h>
int soDep(int n){
	int rev = 0, tmp = n, sum = 0;
	while(n){
		sum += n%10;
		rev = rev*10 + n%10;
		n /= 10;
	}
	if(sum % 10 == 0 && rev == tmp)
		return 1;
	return 0;
}
int main(){
	int l, r;
	//EOF : end of file
	while(scanf("%d%d",&l,&r) != EOF){
		 int cnt = 0;
		 for(int i = l; i <= r; i++){
		 	if(soDep(i))
		 		++cnt;
		 }
		 printf("%d\n",cnt);
	}
}
