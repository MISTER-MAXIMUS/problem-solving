#include<stdio.h>
int power(int a,int b)
{
    if(b==0){
    return 1;
    }
    else
  { 
     return a*power(a,b-1);
}
}
int main()
{
int a,b,x;
printf("enter the number");

scanf("%d%d",&a,&b);
x=power(a,b);
printf("%d",x);
}