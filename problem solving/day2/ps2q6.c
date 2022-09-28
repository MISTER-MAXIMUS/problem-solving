#include<stdio.h>
int main()
{
    int i,j,k,n;
    for ( i = 0; i<4; i++)
    {
         n=1;
        for(j=0;j<7;j++)
        {
           
             if(j>=3-i&&j<=3+i)
            {
                printf("%d",i+n);
              if(j<3)
              {  n=n+1;
            }
            else{
                n=n-1;
            }
            }
            else{
                printf(" ");
            }
           }
        
        printf("\n");
    }
}