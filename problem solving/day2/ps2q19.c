#include<stdio.h>
int fact(int n)
{
    int f=1;
    while(n>=1)
    {
        f=f*n;
        n--;
    }
    return f;
}
int combi(int n,int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}
int pascal(int line)
{
    int i,j,k,r;
    for ( i = 0; i<line; i++)
    {
        k=1;
        r=0;
        for(j=0;j<2*line-1;j++)
        {
            if(j>=line-1-i&&j<=line-1+i&&k==1)
            {
                printf("%2d",combi(i,r));
                k=0;
                r++;
            }
            else{
                printf("  ");
                k=1;

            }
        }
        printf("\n");
    }
    
}
 int main()
{
    int lin,x;
    printf("enter the line");
    scanf("%d",&lin);
    x=pascal(lin);
   printf("%d",x);
}