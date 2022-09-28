#include<stdio.h>
int fact(int n)
{
    int f=1;
    while(n>=1)
    {
        f=f*n;
        n--;
    }
    return f;
}
int sum(int n)
{
    int s=0;
    while(n>=1)
    {
        s=s+fact(n);
        n--;
    }
    return s;
}
int main()
{
    int n,x;
    printf("enter the number");
    scanf("%d",&n);
    x=sum(n);
    printf("%d",x);
}