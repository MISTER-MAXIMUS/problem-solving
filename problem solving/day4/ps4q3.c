#include<stdio.h>
int fact(int n)
{
    if(n==0||n==1){
    return 1;}
    else{
    return n*fact(n-1);
}
}
int main()
{
    int n,x;
    printf("enter the number");
    scanf("%d",&n);
    x=fact(n);
    printf("%d",x);
}