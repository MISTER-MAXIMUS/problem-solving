#include<stdio.h>
int perfect(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
{
    if(n%i==0)
    {
        sum=sum+i;
    }
}
return sum;
}
int main()
{
    int n,i,x;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        x=perfect(i);
        if(x==i)
        {
            printf("\n%d",x);
        }
    }
    
}