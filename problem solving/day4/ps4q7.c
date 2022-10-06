#include<stdio.h>
int fact(int n)
{
    if(n==0||n==1){
    return 1;}
    else{
    return n*fact(n-1);
}
}
int strong(int n)
{
    int r;
    int sum=0;
    while(n>0)
    {
       r=n%10;
       sum=sum+fact(r); 
       n=n/10;

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
        x=strong(i);
        if(x==i)
        {
            printf("\n%d",x);
        }
    }
    
}