#include<stdio.h>
int pow(int n,int m)
{
    if(m==0){
    return 1;}
    else{
    return n*pow(n,m-1);
}
}
int armstrong(int n)
{
    int r;
    int sum=0;
    while(n>0)
    {
       r=n%10;
       sum=sum+pow(r,3); 
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
        x=armstrong(i);
        if(x==i)
        {
            printf("\n%d",x);
        }
    }
    
}