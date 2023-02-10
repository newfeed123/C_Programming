#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 2*n-1; j++){
			if(j <= i) 
				printf("%d", n-j);
			else if(i + j >= 2*n-2) 
				printf("%d", j-n+2);
			else 
				printf("%d", n-i);
		}
		printf("\n");
	}
	for(int i = n-2; i>=0; i--){
		for(int j=0; j < 2*n-1; j++){
			if(j <= i) 
				printf("%d", n-j);
			else if(i+j >= 2*n-2) 
				printf("%d", j-n+2);
			else 
				printf("%d", n-i);
		}
		printf("\n");
	}
	
	return 0;
}
