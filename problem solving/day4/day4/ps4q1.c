#include<stdio.h>
int sum=0,r;
int reverse(int n)
{
  if(n>0)
{
  r=n%10;
  sum=sum*10+r;
return reverse(n/10);
}
else{
  return sum;
}
}
int main()
{
  int k,n;
  printf("enter the number");
  scanf("%d",&n);
  k=reverse(n);
  printf("the reverse is%d\n",k);
  if(n==k)

 {
  printf("number is palindrome");
 }
 else{
   printf("number is not palindrome");
 }
}