/*#include<stdio.h>
int main(void)
{
int i,n,sum,item;
printf("Enter n:");
scanf("%d",&n);
sum=0;
for(i=1;i<=n;i++)
{
    item = 1;
   for(int g=1;g<=i;g++)
   {
    item=item*g;
   }

   sum=sum+item;

}
printf("%d\n",sum);

}*/
/*以上为求阶层的和*/


/*#include<stdio.h>
int main(void)
{
  int a,n;
  scanf("%d%d",&a,&n);
   int sum=0;
   int total=0;
  for(int i=1;i<=n;i++)
  {
    sum=sum*10+a;
    total+=sum;
  }
  printf("%d",total);
  return 0;

}*/
/*以上为求Sn = a + aa + aaa + … + aa…a 的值*/


/*#include<stdio.h>
int main(void)
{
    int s=0;
    int g=0;
    int sum=0;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       s=i/10;
       g=i%10;
       if(i%7!=0&&s!=7&&g!=7)
       {
        sum+=i*i;
       }
    }
    printf("%d",sum);
    return 0;
}*/
/*以上为一个正整数,如果它能被7整除,或者它的十进制表示法中某一位上的数字为7,则称其为与7相关的数*/


/*#include<stdio.h>
#include<math.h>
int main(void)
{
  long long n; 
  long long a;
  scanf("%lld",&n);
  a=pow(2,n);
  printf("%lld",a);
  return 0;

}*/
/*以上*/
#include<stdio.h>
int a[100][100];
int main(void)
{
  int n;
  
  
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=i;j++)
    {
      scanf("%d",&a[i][j]);
    }
    
  }
  int max=0;

    for(int i=n-2;i>=0;i--)
    {
      for(int j=0;j<=i;j++)
      {
        int max = (a[i+1][j] >= a[i+1][j + 1]) ? a[i+1][j] : a[i+1][j + 1];
        a[i][j]+=max;
      }
     }
    
    printf("%d",a[0][0]);
    return 0;
  

}






