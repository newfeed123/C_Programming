#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    scanf("%d",&n);
    printf("%d\n",n/2);
    if (n%2==0){
    	// 8 : i < 3 -> 2 2 2
        for(i=0;i<n/2-1;i++){
            printf("2 ");
        }
        printf("2\n");
    }
    if(n%2==1){
        for (i=0;i<n/2-1;i++){
            printf("2 ");
        }
        printf("3\n");
    }
    return 0;
}
