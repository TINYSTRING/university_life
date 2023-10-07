#include<stdio.h>
int main(void){
   int i,n,fenmu,flag;
   double sum,item;
   printf("Enter n:");
   scanf("%d",&n);
   sum=0;fenmu=1;item=1;flag=1;
   for(i=1;i<=n;i++){
      sum=sum+item;
      flag=-flag;
      fenmu=fenmu+2;
      item=flag*1.0/fenmu;
     
   }
   printf("sum=%f\n",sum);
   return 0;
}









