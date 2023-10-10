/*#include <stdio.h>
int main(void)
{
    {
        int x;
        int i;
        scanf("%d", &x);
        // 条件少时可能用while更方便
        for (i = 0;; i++) // i没有限制条件，所以需要break
        {
            if (x != 0)
            {
                x /= 10;
            }
            else
            {
                printf("%d\n", i);
                break;
            }
        }
        return 0;
    }
}*/

/*【模板】最长公共子序列*/
/*这其实就是一种几近贪心的思想：我们当前的上升子序列长度如果已经确定，
那么如果这种长度的子序列的结尾元素越小，
后面的元素就可以更方便地加入到这条我们臆测的、可作为结果、的上升子序列中。
(LIS O(nlogn))的思想*/
#include <stdio.h>
const int maxn = 100005;
int a[maxn], b[maxn], map[maxn], f[maxn];
//f[i]是指i长度时的末尾元素
//map将原数组离散化
int main(void)
{
    int n,m;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        map[a[i]] = i; // 重新定义大小，将LCS变为LIS
    }
    scanf("%d",&m);
    for (int i = 1; i <= m; i++)
    {
        scanf("%d", &b[i]);
        f[i] = -1; // 定义一个长度
    }
    int len = 0;//长度初始要为0,因为刚开始还没有录入元素
    f[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int l = 0; // 定义左边界
        int r;     // 定义右边界
        r = len;
        if (f[len] < map[b[i]])
        {
            f[++len] = map[b[i]];//这里只能用++len,因为++len=结果，例如：++1=2,1++=1;
        }
        else
        {
            while (l < r)
            {
                int mid;
                mid = (l + r) / 2;
                if (f[mid] > map[b[i]])
                {
                    r = mid; // 因为是上升，所以要向左边寻找更小的
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (map[b[i]] < f[l])
            {
                f[l] = map[b[i]];//更新末尾
            }
        }
    }
    printf("%d", len);
    return 0;
}