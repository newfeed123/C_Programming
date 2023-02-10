#include<stdio.h>
#include<math.h>
int fibo(int n){
	int i,x=0,y=1,z=1;
	for(i=2;;i++){
		x=y;
		y=z;
		z=x+y;
		if(z>n)
		   break;
	}
	if(y == n)
	   return 1;
	else
	   return -1;
}
int prime(int n){
	int i,s=0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0)
		    s++;
	}
	if(s==0)
	   return 1;
	else 
	   return -1;
}
int main(){
	int i=0,s=0,count=0,a[100],n,x;
	printf("Enter n:");
	scanf("%d",&n);
	x=n;
	while(n!=0){
		a[i]=n%10;
		count=count+1;
		i++;
		n=n/10;
	}
	for(i=0;i<count;i++){
	    s=s+a[i];
	}
	if(fibo(s)==1&&prime(x)==1)
	   printf("Thoa man");
	else
	   printf("Khong thoa man");
	return 0;
}
