#include<stdio.h>
int gcd(int a,int b)
{
    if(a>b)
    {
        return gcd(a-b,b);
    }
    else if(b>a)
    {
        return gcd(a,b-a);
    }
    else
    {
        return a;
    }
}
int main()
{
    int a,b,c;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    c=gcd(a,b);
    printf("%d",c);
}