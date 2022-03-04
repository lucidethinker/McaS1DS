#include<stdio.h>
void main()
{
 int a[10],b[10],c[10],i,k,n1,n2,j,t;
 printf("enter the size of first array: ");
 scanf("%d",&n1);
 printf("enter the array elements: ");
 for(i=0;i<n1;i++)
 {
   scanf("%d",&a[i]);
 }
 printf("array after sorting: ");
 for(i=0;i<n1;i++)
 {
  for(j=i;j<n1;j++)
   {
     if(a[i]>a[j])
     {
       t=a[i];
       a[i]=a[j];
      a[i]=t;
     }
  }
 }
  for(i=0;i<n1;i++)
  {
   printf("%d",a[i]);
   c[i]=a[i];
  }
   printf("\n");
   k=i;
   printf("enter the size of the second array:" );
   scanf("%d",&n2);
   printf("enter the elements: ");
   for(i=0;i<n2;i++)
   {
    scanf("%d",&b[i]);
   }
   printf("after merging: ");
   j=0;
   for(i=0;i<n2;i++)
   {
     for(j=i+1;j<n2;j++)
{
     if(b[i]>b[j])
     {
      t=b[i];
      b[i]=b[j];
      b[j]=t;
     }
   }
}
  for(i=0;i<n2;i++)
   {
     printf("%d",b[i]);
     c[k]=b[i];
     k++;
   }
   printf("\n");
   printf("merged array is : ");
   for(i=0;i<k;i++)
   {
     printf("%d",c[i]);
   }
}


