#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 0; i<=4; i++)
    {
        for(j=0;j<=4;j++)
        {
            if(i<=2)
            {
            if(j>=i&&j<=4-i)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            }
            else
            {
            if(j>=4-i&&j<=i)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            }
        }
        printf("\n");
    }
    

}