#include<stdio.h>
#include<math.h>
int main(){
	int m;
	scanf("%d",&m);
	int i,count=0,vth=0,vtc=0,a[100][100],b[150];
	int n=2*m-1,n1=n;
	while(count < n1*n1){
		for(i = vtc;i <= n-1; i++){
			a[vth][i] = m;
			count++;
		}
		for(i = vth+1; i <= n-1; i++){
			a[i][n-1] = m;
			count++;
		}
		for(i = n-2; i >= vtc; i--){
			a[n-1][i] = m;
			count++;
		}
		for(i = n-2; i > vth; i--){
			a[i][vtc] = m;
			count++;
		}
		n--,m--;vth++;vtc++;
		}
		
		for(i = 0; i < n1; i++){
			for(int j = 0; j < n1; j++){
				printf("%d", a[i][j]);
			}
			printf("\n");
	}
	return 0;
	
}
