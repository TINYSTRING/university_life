/*#include<stdio.h>
int main()
{
    int a[1000]={1,1,1};
    int n;
    scanf("%d",&n);
    for(int i=3;i<=25;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=1;i<=n;i++){
        int arr;
        scanf("%d",&arr);
        printf("%d\n",a[arr]);

    }
    return 0;

}*/
/*以上菲波那契数列*/
/*#include<stdio.h>
int main()
{
    double x,sum;
    for(int i=1;i<=12;i++){
        scanf("%lf",&x);
        sum+=x;
    }
    printf("$%.2f",sum/12);
    return 0;
}*/
/*以上为financial management*/
/*#include <stdio.h>
int main()
{
    int a;
    int nm[100];
    int i = 0;
    for (; i < 100; i++) // 初始化数组
    {
        nm[i] = 0;
    }
    scanf("%d", &a);
    for (i = 0;;)
    {
        if (a != 0) // 短除法
        {
            nm[i] = a % 8;
            i++; // 计数器
            a /= 8;
        }
        else
        {
            break;
        }
    }
    for (; i > 0; i--)//使用计数器约束循环次数
    {
        printf("%d", nm[i - 1]); // 逆序输出
    }
    return 0;
}*/
/*以上为十进制转八进制*/
/*#include <stdio.h>
int apple(int M, int N)
{
    if (M == 0 || N == 1)
    {
        return 1;//有一个盘子和没有苹果都只有一种方法
    }
    else if (N > M)
    {
        return apple(M, M);//此时apple(M,N)==apple(M,M)
    }
    else
    {
        return apple(M - N, N) + apple(M, N - 1);//分为有空盘和无空盘，无空盘则为apple(M-N,N),有空盘则等价于至少一个空盘
    }
}
int main()
{
    int t, M, N;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &M, &N);
        printf("%d\n", apple(M, N));
    }
    return 0;
}*/
/*以上为placing apples*/
/*#include<stdio.h>
int main()
{
    int a[100001];
    int n;
    scanf("%d",&n);
    int prefix[100001]={0};
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+a[i];
    }
    int m;
    int l,r;
    scanf("%d",&m);
    while(m--){
        int sum=0;
        scanf("%d%d",&l,&r);
        sum=prefix[r]-prefix[l-1];
        printf("%d\n",sum);
    }
    return 0;
}*/
/*以上为求区间和*/
/*#include <stdio.h>
int main()
{
    int k;
    scanf("%d", &k);
    int a[101];
    int i;
    int c, n, m;
    c = n = m = 0;
    for (i = 1; i <= k; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 1)
        {
            c++;
        }
        else if (a[i] == 5)
        {
            n++;
        }
        else if (a[i] == 10)
        {
            m++;
        }
    }
    printf("%d\n%d\n%d\n", c, n, m);
    return 0;
}*/
/*整数的个数*/
/*#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int q, w, r, t;
    long long e;
    int mouth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (n--)
    {
        int sum = 0;
        scanf("%d %d %lld %d %d", &q, &w, &e, &r, &t);
        if (q == r)
        {
            sum = t - w;
            e *= pow(2, sum);
        }
        else
        {
            for (int i = q + 1; i < r; i++)
            {
                sum += mouth[i];
            }
            sum = mouth[q] - w + t + sum;
            e *= pow(2, sum);
        }
        printf("%lld\n", e);
    }
    return 0;
}*/
/*细菌繁殖*/
/*#include<stdio.h>
int main()
{
    int a[122][122];
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);//读入数据
        }
    }
    int sum[122][122];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i][j];//容斥原理定义二维前缀和
        }
    }
    int i1,i2,j1,j2;//定义边界
    int ans=-128;//因为x在[-127,127]内
    int total;
    for(i1=1;i1<=n;i1++){
        for(j1=1;j1<=n;j1++){
            for(i2=1;i2<=n;i2++){
                for(j2=1;j2<=n;j2++){
                    if(i2<i1||j2<j1){
                        continue;
                    }
                    total=sum[i2][j2]-sum[i1-1][j2]-sum[i2][j1-1]+sum[i1-1][j1-1];
                    if(total>ans){
                        ans=total;
                    }
                }
            }
        }
    }
    printf("%d",ans);
    return 0;
}*/
/*以上为求最大加权矩形*/
/*#include <stdio.h>
int a[5000001] = {0};
int diff[5000001];
int main()
{
    int n, p;
    int i;
    scanf("%d%d", &n, &p);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);//数组初始化
    }
    for (i = 1; i <= n; i++)
    {
        diff[i] = a[i] - a[i - 1];//定义差分数组
    }
    for (i = 1; i <= p; i++)//进行区间修改
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        diff[x] += z;//x往后的都加z
        diff[y+1]-=z;
    }
    for (i = 1; i <= n; i++)//还原数组
    {
        a[i] = a[i - 1] + diff[i];
    }
    int rbq = 1;
    for (i = 1; i <= n; i++)//遍历求最小值
    {
        if (a[i] < a[rbq])
        {
            rbq = i;
        }
    }
    printf("%d", a[rbq]);
    return 0;
}*/
/*区间修改语文成绩*/
/*#include <stdio.h>
int a[1002][1002] = {0}; // 数组初始化
int diff[1002][1002];//以后都开全局变量
int main()
{
    int n, m;
    int x1, x2, y1, y2;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            diff[i][j] = a[i][j] - a[i - 1][j] - a[i][j - 1] + a[i - 1][j - 1];//前缀和的逆公式
        }
    }
    for (int i = 1; i <= m; i++)//差分矩阵
    {
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        diff[x1][y1]++;
        diff[x1][y2 + 1]--;
        diff[x2 + 1][y1]--;
        diff[x2 + 1][y2 + 1]++;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a[i][j] = a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1] + diff[i][j];//还原数组
            printf("%d ", a[i][j]);
        }
        printf("\n");//矩阵换行
    }
    return 0;
}*/
/*二维差分，嘿嘿(地毯)*/
/*#include <stdio.h>
int a[1002][1002] = {0};
int sum[1002][1002];
int ans=-999999999;
int main()
{
    int n, m;
    int c;
    scanf("%d%d%d", &n, &m,&c);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &a[i][j]); // 数组初始化
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + a[i][j];
            // 定义前缀和
        }
    }
    int i1, i2, j1, j2; // 定义边界
    int total;
    int q = 0;
    int w = 0;
    for (i2 = c; i2 <= n; i2++)
    {
        for (j2 = c; j2 <= m; j2++)//要用最右边才能遍历
        {
            j1=j2-c+1;
            i1=i2-c+1;
            total = sum[i2][j2] - sum[i1 - 1][j2] - sum[i2][j1 - 1] + sum[i1 - 1][j1 - 1];
            if (total > ans)
            {
                ans = total;
                q = i1;
                w = j1;
            }
        }
    }
    printf("%d %d", q, w);
    return 0;
}*/
/*领地选择*/
/*#include <stdio.h>
int diff[100002] = {0};
int main()
{
    int n, m;
    int p1,p2;
    scanf("%d%d", &n, &m);
    scanf("%d",&p1);
    for (int i = 2; i <= m; i++)
    {
        scanf("%d",&p2); // 读入数据
        if (p1 < p2)
        {
            diff[p1]++; // 路段和它左边的数字同时编号
            diff[p2]--;
        }
        else
        {
            diff[p1]--;
            diff[p2]++;
        }
        p1 = p2;
    }
    int a, b, c;
    long long sb = 0;
    long long ans=0;
    for (int i = 1; i < n; i++)
    {
        sb += diff[i]; // 前缀和
        scanf("%d%d%d", &a, &b, &c);
        if (a * sb <= b * sb + c)
        {
            ans += a * sb;
        }
        else
        {
            ans += b * sb + c;
        }
    }
    if (m <= 1)
    {
        ans = 0;
    }
    printf("%lld", ans);
    return 0;
}*/
/*海底高铁*/
/*#include <stdio.h>
long long a[100002] = {0};
long long q,p,diff[100002]={0};
int main()
{
    int n;
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld\n", &a[i]);
    }
    for (int i = 2; i <= n; i++)
    {
        diff[i]=a[i]-a[i-1];
        if(diff[i]>0){
            q+=diff[i];
        }else{
            p-=diff[i];
        }
    }
    long long ans1,ans2;
    if(q>p){
        ans1=q;
        ans2=q-p+1;
    }else{
        ans1=p;
        ans2=p-q+1;
    }
    printf("%lld\n%lld",ans1,ans2);
    return 0;

}*/
/*差分序列IncDec Sequence(好题)*/
/*#include<stdio.h>
int a[102][102]={0};
int sum[102][102];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
            sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i][j];
        }
    }
    int i1,i2,j1,j2;//定义边界
    int total;
    int ans=0;
    int q;
    for(i1=1;i1<=n;i1++){
        for(j1=1;j1<=m;j1++){
            for(i2=1;i2<=n;i2++){
                for(j2=1;j2<=m;j2++){
                    if(i2<i1||j2<j1){
                        continue;
                    }
                    total=sum[i2][j2]-sum[i1-1][j2]-sum[i2][j1-1]+sum[i1-1][j1-1];
                    if(i2-i1==j2-j1&&total==(i2-i1+1)*(j2-j1+1)&&total>ans){
                        ans=total;
                        q=i2-i1+1;
                    }
                }
            }
        }
    }
    printf("%d",q);
    return 0;
}*/
/*最大正方形*/
/*#include<stdio.h>
int a[5005][5005]={0};
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int x,y,v;
    for(int i=1;i<=n;i++){
        scanf("%d%d%d",&x,&y,&v);
        a[x+1][y+1]+=v;//0<=x,y<=5000;
    }
    for(int i=1;i<=5001;i++){
        for(int j=1;j<=5001;j++){
            a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
            //为了省空间
        }
    }
    int ans=0;
    int total;
    for(int i=m;i<=5001;i++){
        for(int j=m;j<=5001;j++){
            total=a[i][j]-a[i-m][j]-a[i][j-m]+a[i-m][j-m];
            //拿张纸，有手有脚自己推一下捏
            if(total>ans){
                ans=total;
            }
        }
    }
    printf("%d",ans);
    return 0;
}*/
/*激光炸弹*/
/*#include<stdio.h>
int prefix[50010]={0};
int f[7],l[7];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&prefix[i]);//数组初始化
        prefix[i]+=prefix[i-1];
        prefix[i]%=7;//prefix[i]是当位置为i时 前缀和%7的余数
    }
    for(int i=n;i>=1;i--){  
        f[prefix[i]]=i;//倒着扫一遍 不断更新最后就是这个余数第一次出现;
    }
    f[0]=0;//从1加到i是7的倍数的情况下，需要把0的第一次出现设为0，即把整个区间[1,i]加上了
    for(int i=1;i<=n;i++){
        l[prefix[i]]=i;//最后一次出现pre[i]这个余数时位置为i;
    }
    int ans=0;
    for(int i=0;i<=6;i++){
        if(l[i]-f[i]>ans){
            ans=l[i]-f[i];//前缀和区间长度直接减
        }
    }
    printf("%d",ans);
    return 0;
}*/
/*求和为7的倍数时的最大区间长度(好题)*/
