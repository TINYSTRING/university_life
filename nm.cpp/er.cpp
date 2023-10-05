#include<stdio.h>
int main(void)
{
   int a,arr[5];
   int i;
   scanf("%d",&a);
   for( i=1;i<=5;i++)
   {
    scanf("%d",&arr[i]);
   }
   int sum=0;
   for( i=1;i<=5;i++)
   {
    if(arr[i]<a){sum+=arr[i];}
    
   }
   printf("%d",sum);
   return 0;

}