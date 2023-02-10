#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<algorithm>
using namespace std;
int str_cmp(char c1[], char c2[]){
	//tra ve 0 neu c2 = c1
	//1 : c1 co thu tu tu dien > c2
	//-1: c1 co thu tu tu dien < c2
	int len1 = strlen(c1);
	int len2 = strlen(c2);
	int min_val = min(len1, len2);
	for(int i = 0; i < min_val;i++){
		if(c1[i] > c2[i])
			return 1;
		else if(c1[i] < c2[i])
			return -1;
	}
	if(len1 == len2)
		return 0;
	if(len1 > len2)
		return 1;
	else if(len1 < len2)
		return -1;
}
int main(){
	char c1[100], c2[100];
	scanf("%s", c1);
	scanf("%s", c2);
	printf("%d", str_cmp(c1,c2));
}
