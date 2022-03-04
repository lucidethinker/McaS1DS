#include <stdio.h>
int main()
{
  int i,sum,size;
  printf("Enter size of Array:\n");
  scanf("%d",&size);
  int ar[size];
  sum = 0;
  printf("Enter elements:\n");
  for (i=0;i<size;i++)
  {
    scanf("%d",&ar[i]);
    sum+=ar[i];
  }
  printf("Sum is %d",sum);
  return 0 ;
}
