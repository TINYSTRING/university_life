/*#include <stdio.h>
int main()
{
    int a[1000];
    int n, m;
    int i;
    while (scanf("%d%d", &n, &m) == 2 && n != 0 && m != 0)
    {
        int sum = 0;//用于踢人
        int count = 0;//用于记录踢出的人数
        
        for (i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }
        for (i = 0; count < n - 1;)
        {
            if (a[i] != 0)
            {
                sum++;
            }
            if (sum == m)
            {
                a[i] = 0;
                sum = 0;
                count++;
            }
            i++;
            if (i == n)//如果i=1开始，此处变为n+1;
            {
                i = 0;
            }
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                printf("%d\n", a[i]);
            }
        }
    }
    return 0;
}*/
/*以上为计数器解法*/
/*#include<stdio.h>
int main(void)
{
      int n, m;
    while (scanf("%d%d", &n, &m) == 2 && (n != 0 && m != 0)) {
        int p = 0;//p代表答案
        for (int i = 2; i <= n; i++)
            p = (p + m) % i;//n-1与n的递推公式
        printf("%d\n", p + 1);
    }
    return 0;

}*/
/*以上为递推解法*/
