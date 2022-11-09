#include <stdio.h>
int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    else
    {
        return a*power(a,b-1);
    }
}

int main() {
    int a,b,k,l,j;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&k);
    j=power(a,b);
    while(k!=0)
    {
        l=j%10;
        j=j/10;
        k--;
    }
    printf("%d",l);
    
}