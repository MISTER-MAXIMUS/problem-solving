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
            if(j>=2-i&&j<=2+i)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            }
            else
            {
            if(j<=6-i&&j>=i-2)
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