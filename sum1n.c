//sum of 1 to n numbers//
#include<stdio.h>
void main()
{
    int n,s;
    int sum(int);
    printf("enter n value");
    scanf("%d",&n);
    s=sum(n);
    printf("sum of 1 to n numbers is %d",s);
}
int sum(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    return(s);
}
