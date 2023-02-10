#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
	char c1[100], c2[100], c3[100];
	scanf("%s", c1);
	scanf("%s", c2);
	//strcpy(c1,c2);
	strcat(c1,c2);
	printf("%s\n%s", c1);
}
