#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<algorithm>
using namespace std;
int check_0_1(char c[]){
	int cnt_0 = 0, cnt_1 = 0;
	for(int i = 0; i < strlen(c);i++){
		if(c[i] == '0'){
			cnt_0++;
			cnt_1 = 0;//vi phai lien tiep => doan nhung day 1 lien tiep bi ngat quang cnt_1 = 0;
		}
		else if(c[i] == '1'){
			cnt_1++;
			cnt_0 = 0;
		}
		if(cnt_0 >= 7 || cnt_1 >= 7)
			//co TH da thoa man
			return 1;
	}
	return 0;
}
int main(){
	char c[100];
	scanf("%s", c);
	if(check_0_1(c))
		printf("YES");
	else
		printf("NO");
}
