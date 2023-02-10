#include<stdio.h>
#include<string.h>

int main(){
	char c[1001];
	scanf("%s",c);
	int sum = 0;
	//'ky tu' : ascii
	//'0' : 48
	//'1' : 49
	//'2' : 50
	//=> muon chuyen ky tu '0' ve so 0 ta lay 48 - 48 , tuc la '0' - '0'
	//=> muon chuyen ky tu '1' ve so 0 ta lay 49 - 48 , tuc la '1' - '0'
	for(int i = 0; i < strlen(c); i++)
		sum += (c[i] - '0');//chuyen ci ve so
	printf("%d", sum);
}
