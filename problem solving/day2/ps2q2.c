#include<stdio.h>
int main()
{
    int i,j,k,n;
    for ( i = 0; i <4; i++)
    {
        k=1;
         n=1;
        for(j=0;j<7;j++)
        {
           
            if(j>=3-i&&j<=3+i&&k==1)
            {
                printf("%d",i+n);
                k=0;
                n=n+1;
            }
            else{
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}