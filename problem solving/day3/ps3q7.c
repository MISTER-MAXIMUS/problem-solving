#include<stdio.h>
float fact(float n)
{
    float f=1;
    while(n>=1)
    {
        f=f*n;
        n--;
    }
    return f;
}
int pow(float x,float n)
{
    if(n==0)
    {
        return 1;
    }
    else{
    return x*pow(x,n-1);
}
}
float sum(float n,float x)
{
    float s=0;
    while(n>=1)
    {
        s=s-pow(-1,n)*(n/fact(2*n-1));
        n--;
    }
    return s;
}
float main()
{
    float n,x;
    float p;
    printf("enter the number");
    scanf("%f",&n);
    printf("enter the value");
    scanf("%f",&x);
    p=sum(n,x);
    printf("%f",p);
}