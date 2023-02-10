#include<stdio.h>
#include<math.h>

int max(int a, int b, int c){
	int max = a;
	if(b > max)
		max = b;
	if(c > max) 
		max = c;
	return max;
}
int main(){
	float F, C;
	scanf("%f", &C);
	F = (C * 9/5) + 32;
	printf("%.2f", F);
	
	int x,y;
	scanf("%d %d", &x, &y);
	printf("%.2f", pow(x,y));
	
	int kq = max(1,2,3);
	printf("%d", kq);
}
