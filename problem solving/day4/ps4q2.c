#include<stdio.h>
int exchange(int n,int m)
{
    int temp=m;
    m=n;
    n=temp;
    return n;
    return m;

}
int mean(int a[])
{
    int s=0;
    int i;
    for(i=0;i<5;i++)
    {
        s=s+a[i];
    }
    return s/5;
}
int median(int a[])
{
    int i;
    for(i=0;i<5;i++)
    {
        if(a[i]>a[i+1])
        {
            exchange(a[i],a[i+1]);
        }
    }
    return a[2];

}
int main()
{
    int a[5]={15,10,20,25,30};
    int x,y;
    x=mean(a);
    y=median(a);
    printf("\n%d",x);
    printf("\n%d",y);
}