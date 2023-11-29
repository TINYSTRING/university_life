#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100000] = {0};
bool cmp(int a, int b)
{
    return a > b;
}
int main(void)
{
    int n, m, k, q;
    int temp = 0;
    scanf("%d%d%d%d", &n, &m, &k, &q);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &temp);
            if (temp == 1)
            {
                a[j]++;
            }
        }
    }
    sort(a + 1, a + m + 1, cmp);
    ll count = 0;
    ll ans = 1;
    for (int i = 1; i <= m; i++)
    {
        if (a[i] >= k)
        {
            count++;
            continue;
        }
        if (q < (k - a[i]))
        {
            break;
        }
        count++;
        int t = n - a[i]; // 代表此时空的位置数
        for (int j = 1; j <= k - a[i]; j++)
        {
            ans *= (t % 998244353);
            ans %= 998244353;
            t--;
        }
        q -= (k - a[i]);
    }
    printf("%lld\n", count);
    printf("%lld", ans);
    return 0;
}