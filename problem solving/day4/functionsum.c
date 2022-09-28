#include<stdio.h>
/*int num(int n,int m)
{
    if (m==0)
    {
        return 1;
    }
    else 
    {
        return n*num(n,m-1);
    }
}*/
int main()
{
    int n,m;
    float sum;
    printf("enter the number");
    scanf("%d",&n);
    sum=1.33*3.14*num(n,3);
    printf("%f",sum);
}