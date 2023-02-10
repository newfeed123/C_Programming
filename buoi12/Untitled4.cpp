#include<stdio.h>
#include<math.h>
int factory(int n)
{
	if(n==0||n==8||n==9)	
		return 0;
	if(n==1)	
		return 1;
	return n;
}
long long factory1(long long n)
{
	long long num = 0;
   	int x = 0;
	while(n)
	{
		long long tmp = pow(10,x++);
		int r = factory(n%10);
		if(!(r==0 || r==1 ||r==9||r==8))	
			return -1;
		num = num + r*tmp;
		printf("*%lld ", num);
		n/=10;
	}
	return num;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		if(factory1(n)==-1)		
			printf("INVALID\n");
		else
			printf("%lld\n",factory1(n));
	}
}
