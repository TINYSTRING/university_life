#include <stdio.h>
#include <string.h>
long long expect[50005][3] = {0};
int mark[500005] = {0};
int chair[50005] = {0};
int dis[50005] = {0}, sum[50005] = {0}; // 分别记录距离，相同距离的个数
int main(void)
{
    int n;
    scanf("%d", &n);
    int dsb = n;
    int i = 0;
    while (dsb--)
    {
        ++i;
        scanf("%lld%lld", &expect[i][1], &expect[i][2]);
    }
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            mark[expect[i][j]]++; // 被三人以上爱着的情况只是幻想（因为我没有过）
        }
    }
    for (int j = 1; j <= n; j++)
    {
        if (mark[j] >= 3)
        {
            printf("-1");
            return 0; // 结束这场戏剧
        }
    }
    int temp;  // 用于储存
    int joker; // 用于储存小丑（世界上本来没有小丑，爱的人多了也就有了）
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            temp = expect[i][j];
            joker = -1;
            for (int t = 1; t <= 2; t++)
            {
                if (expect[temp][t] != i)
                {
                    joker++; // 如果你喜欢的不喜欢你，那你只是小丑而已
                    if (joker == 1)
                    {
                        printf("-1");
                        return 0; // 小丑的退场
                    }
                }
            }
        }
    }
    for (int j = 1; j <= n; j++)
    {
        chair[j] = j;
    }
    chair[2] = expect[1][1];

    for (int i = 3; i <= n; i++)
    {
        if (expect[chair[i - 1]][1] == chair[i - 2])
        {
            chair[i] = expect[chair[i - 1]][2];
        }
        else
        {
            chair[i] = expect[chair[i - 1]][1];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        dis[chair[i]] = (i - chair[i] + n) % n; // 顺时针判断距离，+n防止为负（求负数的余数）
        sum[dis[chair[i]]]++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum[i] >= ans)
        {
            ans = sum[i];
        }
    }
    memset(sum, 0, sizeof(sum));
    memset(dis, 0, sizeof(dis));
    for (int i = 1; i <= n; i++)
    {
        dis[chair[i]] = (i - (n - chair[i] + 1) + n) % n; // 逆时针判断距离
        sum[dis[chair[i]]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (sum[i] >= ans)
        {
            ans = sum[i];
        }
    }
    printf("%d", n - ans);
    return 0; // 没有人受伤的世界达成了（大老师靠着墙缓缓说道）
}