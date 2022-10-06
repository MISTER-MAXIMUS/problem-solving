#include <stdio.h>
#include <math.h>
/*int prime(int n)
{
    int i,flag;
    flag=1;
    for(i=2;i<n;i++)
    {
       if(n%i==0)
       {
        flag=0;
        break;
       }
    }
    if(flag==0){
        printf("number is not prime");
    }
    else{
        printf("number is prime");
    }

}*/
int prime(int n)
{
    int i, x, j;
   int flag = 1;
    x = sqrt(n);
    for (i = 2; i <= x; i++)
    
    {
        for (j = 3; j <= n; j++)
        {
            if (j%i == 0)
            {
                flag = 0;
                break;
            }
        }
        
        }
    }

void main()
{
    int x,n;
    printf("enter the number");
    scanf("%d", &n);
   prime(n);
   
}