#include<stdio.h>
int main (){
	int n,start=0;
	scanf("%d",&n);
	for(int i = 0; i < n;i++){
		if(i%2==0){
			start+=i+1;
				for(int j=0;j<=i;j++){
					printf("%d ",start);
					start++;
				}
				printf("\n");
			}
			else{
				start+=i;
				for(int j=0;j<=i;j++){
					printf("%d ",start);
					start--;
				}
				printf("\n");
		}
	}
	return 0;
}
