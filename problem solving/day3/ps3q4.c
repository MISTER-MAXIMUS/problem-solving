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
int pow(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
    return x*pow(x,n-1);
}
}
int sum(int n,int x)
{
    int s=0;
    while(n>=0)
    {
        s=s+pow(-1,n)*(pow(x,n)/fact(n));
        n--;
    }
    return s;
}
int main()
{
    int n,x;
    int p;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the value");
    scanf("%d",&x);
    p=sum(n,x);
    printf("%d",p);
}