#include <stdio.h>
int xl[100010]; // 定义销售量
int main(void)
{
    int expect; // 输入预期价
    int c, d;
    scanf("%d%d%d", &expect, &c, &d); // 读入成本和对应的销售量
    int cb;                           // 用于储存成本
    xl[c] = d;                        // xl[i]表示i元时对应的销售量
    cb = c;
    int a, b;
    int i;
    while (scanf("%d%d", &a, &b) && a != -1 && b != -1)
    {
        for (i = c + 1; i <= a; i++)
        {
            xl[i] = d - (b - d) / (c - a) * (i - c); // 两点线性公式
        }
        c = a;
        d = b; // 准备下一次读入
    }
    int down;
    scanf("%d", &down); // 读入超出expect时销售量的变化
    for (i = c + 1;; i++)
    {
        xl[i] = xl[i - 1] - down;
        if (xl[i] < 0)
        {
            break;
        }
    }
    int jg; // 最大价格
    jg = i - 1;
    int maxn = -100; // 用于寻找最大总利润
    int maxj = -100; // 用于寻找最大总利润对应的价格
    int lr;          // 定义利润
    for (int j = cb; j <= jg; j++)
    {
        lr = (j - cb) * xl[j];
        if (lr > maxn)
        {
            maxn = lr;
            maxj = j;
        }
    }
    int sss = maxj; // 用于判断补贴或税收
    // 总利润与单利润构成一个上凸型的函数，函数移动“左加右减“
    if (sss == expect)
    {
        printf("0");
    }
     // 补贴
        if (sss > expect)
        {
            maxn = -100;
            for (i = 1; i <= jg; i++)
            {
                for (int j = cb; j <= jg; j++)
                {
                    lr = (j - cb + i) * xl[j];
                    if (lr >= maxn)
                    {
                        maxn = lr;
                        maxj = j;
                    }
                }
                if (maxj == expect)
                {
                    printf("%d", i);
                    return 0;
                }
            }
            printf("NO SOLUTION");
        }
         // 税收
            if (sss < expect)
            {
                maxn = -100;
                for(i = 32; i <= jg; i++)
                {
                    int f = -i;
                    for (int j = cb; j <= jg; j++)
                    {
                        lr = (j - cb + f) * xl[j];
                        if (lr >= maxn)
                        {
                            maxn = lr;
                            maxj = j;
                            printf("maxn is %d, maxj is %d\n", maxn, maxj);
                        }
                    }
                    printf("i is %d maxj is %d\n", i, maxj);
                    if (maxj == expect)
                    {
                        printf("%d", f);
                        return 0;
                    }
                }
                printf("NO SOLUTION");
            }
    return 0;
}
/*税收与补贴问题的错误代码*/
