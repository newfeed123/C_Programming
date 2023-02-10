#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

//strlen() tra ve size_t , ko phai la int
int main(){
	char c[1000];
	gets(c);
	c[strlen(c)] = '\0';//xoa phim enter o cuoi
	
	char *token = strtok(c," ");
	int min_len = 1e9, max_len = 0;
	char min[100], max[100];//luu 2 tu can in
	//char *min, *max
	while(token != NULL){
		//xu ly token vua tach dc
		if(strlen(token) < min_len){
			min_len = strlen(token);
			strcpy(min,token);
			//min = token; gan truc tiep tu con tro token sang con tro min
		}
		if(strlen(token) > max_len){
			max_len = strlen(token);
			strcpy(max,token);
			//max = token
		}
		token = strtok(NULL," ");
	}
	printf("%s %s",max,min);
}
