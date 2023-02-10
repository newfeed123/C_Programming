#include<stdio.h>
#include<cmath.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		if(i == 0){
			printf("%d %d\n", a[1]-a[0], a[n-1]-a[0]);
		}
		else if(i == n-1)
			printf("%d %d\n", a[n-1]-a[n-2], a[n-1]-a[0]);
		else
			printf("%d %d\n", min(a[i]-a[i-1], a[i+1]-a[i]), max(a[i]-a[0], a[n-1]-a[i]));
	}
}
