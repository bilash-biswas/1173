#include<stdio.h>
int main()
{
    int a[10],i,v;

     scanf("%d",&v);
     a[0]=v;
    for(i=1;i<10;i++)
    {
     a[i]=v*2;
     a[i]=a[i-1]*2;
    }
    for(i=0;i<10;i++)
    {
     printf("N[%d] = %d\n",i,a[i]);
    }

    return 0;
}
