#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		scanf("%d %d",&n, &m);
		int a[n],b[m],c[m+n];
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			c[cnt++]=a[i];
		}	
		for(int i=0;i<m;i++)
		{
			scanf("%d",&b[i]);
			c[cnt++]=b[i];
		}
		
		int tmp=fmax(a[n-1],b[m-1]);
		int f[tmp+1]={0};
		
		for(int i=0;i<m+n;i++)
			f[c[i]]++;
		printf("\n");
		
		for(int i=0;i<=tmp;i++)
			if(f[i] > 0)
				printf("%d ",i);
		printf("\n");
		
		for(int i=0;i<=tmp;i++)
			if(f[i] > 1)	
				printf("%d ",i);
		printf("\n");
	}
	return 0;
}
