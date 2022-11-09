#include <stdio.h>

int main() {
    int n,j,sum=0,k;
    scanf("%d",&n);
    while(n>9)
    {
        k=n;
        sum=0;
        while(k!=0)
        {
            j=k%10;
            sum=sum+j;
            k=k/10;
        }
        n=sum;
    }
    printf("%d",n);
    return 0;
}