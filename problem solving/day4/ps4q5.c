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
    int i, x, j, flag;
    flag = 1;
    x = sqrt(n);
    for (j = 3; j <= n; j++)
    {
        for (i = 2; i <= x; i++)
        {
            if (j%i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("\n%d", j);
            break;
        }
    }
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    prime(n);
}