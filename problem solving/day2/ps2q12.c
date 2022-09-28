#include<stdio.h>
int main()
{
    int i,j,k,n;
    for ( i = 0; i<6; i++)
    {
         n=1;
        for(j=0;j<11;j++)
        {
           
             if(j>=5+i||j<=5-i)
            {
                printf("%d",n);
              if(j<5)
              {  n=n+1;
            }
            else{
                n=n-1;
            }
            }
            else{
                printf(" ");
                if(j==5)
                n=n-1;
            }
           }
        
        printf("\n");
    }
}