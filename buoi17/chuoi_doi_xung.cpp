#include<stdio.h>
#include<string.h>
int palindrome(char c[]){
	int l = 0, r = strlen(c)-1;
	while(l <= r){
		if(c[l] != c[r])
			return 0;
		l++;r--;
	}
	return 1;
}
int main(){
	char c[1001];
	scanf("%s",c);
	if(palindrome(c))
		printf("day la chuoi doi xung");
	
}
