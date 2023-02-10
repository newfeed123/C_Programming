#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
	int t; 
	scanf("%d", &t);
	int x = 0;
	while(t--){
		char c[3];
		scanf("%s", c);
		if(c[1] == '+')
			x++;
		else
			--x;
	}
	printf("%d", x);
}
