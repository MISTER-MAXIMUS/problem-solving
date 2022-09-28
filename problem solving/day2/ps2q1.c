#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the rows");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<i)
            {
                printf("%d",i+j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    

}