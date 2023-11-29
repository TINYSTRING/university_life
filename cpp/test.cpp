/*#include <stdio.h>

int main(void)
{
    int fahr,lower,upper;
    double celsius;
    printf("Enter lower:");
    scanf("%d",&lower);
    printf("Enter upper:");
    scanf("%d",&upper);

    if(lower<=upper){
    printf("fahr celsius\n");
    for(fahr=lower;fahr<=upper;fahr++){
    celsius=(5.0/9.0)*(fahr-32);
    printf("%d%6.1f\n ",fahr,celsius);
    }
    }else{printf("Invalid value!\n");

    }

       return 0;
}*/
/*以上为温度转换表*/



/*#include<stdio.h>
int main(void)
{
   int a;
   scanf("%d",&a);
   if(a%4==0&&a%100!=0||a%400==0)
   {
    printf("Y");
   }
    else
    {
        printf("N");
    }
return 0;
}*/
/*以上为判断闰年*/


/*#include<stdio.h>
int main(void)
{
 int n;
 scanf("%d",&n);
 int a;
 int sum=0;
 for(int i=1;i<=n;i++)
 {
    scanf("%d",&a);
    sum+=a;
 }
 printf("%.2f",(float)sum/n);
 return 0;
}*/
/*以上为求平均年龄*/
