#include<stdio.h>

int main()
{
  int a,b,c;

  printf("enter the three numbers:");
  scanf("%d %d %d",&a,&b,&c);
  if(a>=b && a>=c)
  printf("%d largest number is ",a);
  if (b>=a && b>=c)
  printf("%d largest number",b);
  if(c>=a && c>=b)
  printf("%d largest number",c);
  return 0;
}
