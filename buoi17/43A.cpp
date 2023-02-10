#include<stdio.h>
#include<string.h>
#include<ctype.h>
int cmp(char c[], char d[]){
	if(strlen(c) != strlen(d))
		return 0;
	for(int i = 0; i < strlen(d); i++){
		if(c[i] != d[i])
			return 0;
	}
	return 1;
}
void copy(char c[], char d[]){
	for(int i = 0; i < strlen(d); i++)
		c[i] = d[i];
}
int main(){
	int n;
	scanf("%d", &n);
	int cnt1 = 0, cnt2 = 0;
	char team1[100], team2[1000];
	//nhap ten doi
	scanf("%s", team1);
	cnt1++;
	for(int i = 0; i < n-1; i++){
		char tmp[100];
		scanf("%s",tmp);
		if(cmp(team1,tmp))
			cnt1++;
		else{
			cnt2++;
			copy(team2, tmp);
		}
	}
	if(cnt1 > cnt2)
		printf("%s", team1);
	else
		printf("%s", team2);
}
