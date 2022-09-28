#include<stdio.h>
int sum(int n)
{
    int s=0;
    while(n>=1)
    {
        s=s+(n*(n+1)*(n+2));
        n--;
    }
    return s;
}
int main()
{
    int n;
    int p;
    printf("enter the number");
    scanf("%d",&n);
    p=sum(n);
    printf("%d",p);
}