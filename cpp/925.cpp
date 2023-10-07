/*#include <stdio.h>
int main()
{
    int x;
    int i;
    scanf("%d", &x);
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            printf("N\n"); // 例如6/2时无法准确判断
            break;
        }
    }
    printf("Y\n");
    return 0;
}*/
/*以上为有缺陷的素数判断*/
/*以下为改正*/
/*#include <stdio.h>
int main()
{
    int x;
    int i;
    int flag = 1; // 通过1，0的转变来储存每轮取余的信息
    scanf("%d", &x);
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Y\n");
    }
    else
    {
        printf("N\n");
    }
}*/

/*接力break*/
/*#include <stdio.h>
int main()
{
    int x;
    int one, two, five;
    //int exit=0;
    scanf("%d", &x);
    for (one = 1; one < x * 10; one++)
    {
        for (two = 1; two < x * 10 / 2; two++)
        {
            for (five = 1; five < x * 10 / 5; five++)
            {
                if (one + two * 2 + five * 5 == x * 10)
                {
                    printf("%d %d %d", one, two, five);
                    goto out;//exit=1;
                    //break;
                }
            }
            //if(exit==1){break;}
        }
        //if(exit==1){break;}
    }
    out:
    return 0;
}*?
/*goto一般用于多层循环，平时不要乱用*/

/*求最大公约数*/
#include<stdio.h>
int main(){
    int a,b;
    int t;
    scanf("%d  %d",&a,&b);
    while(b!=0){
        t=a%b;//储存余数
        a=b;
        b=t;
    }
    printf("gcd=%d\n",a);
    return 0;
}