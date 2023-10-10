/*#include <stdio.h>
long long a[105],s=0;
long long b[105];
int main(void)
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    if(a[1]==1){
        b[1]=2;
    }else{
        b[1]=1;
    }
    for(int i=2;i<=n;i++){
            b[i]=b[i-1]+1;
            if(b[i]==a[i]){
                b[i]+=1;
            }
    }
    printf("%d\n",b[n]);
    }

    return 0;
}*/
/*Increasing Sequence(codeforces)*/
#include <stdio.h>
long long  a[50005];
int f[50005]={0};
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    for(int i=1;i<=n;i++){
        f[i]=1;
        for(int j=1;j<i;j++){
            if(a[i]>a[j]&&f[i]<f[j]+1){
                f[i]=f[j]+1;//仅仅为i为一个常数时的最好状态
            }
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(f[i]>ans){
            ans=f[i];//寻找子状态中最好的状态
        }
    }
    printf("%d\n",ans);
    return 0;
}
/*线性规(dp)*/


/*【模板】最长公共子序列*/
/*这其实就是一种几近贪心的思想：我们当前的上升子序列长度如果已经确定，
那么如果这种长度的子序列的结尾元素越小，
后面的元素就可以更方便地加入到这条我们臆测的、可作为结果、的上升子序列中。
(LIS O(nlogn))的思想*/
/*#include <stdio.h>
const int maxn = 100005;
int a[maxn], b[maxn], map[maxn], f[maxn];
//f[i]是指i长度时的末尾元素
//map将原数组离散化
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        map[a[i]] = i; // 重新定义大小，将LCS变为LIS
    }
    for (int i = 1; i <= n; i++)
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
}*/