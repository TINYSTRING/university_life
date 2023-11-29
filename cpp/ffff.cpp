#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <math.h>
using namespace std;
typedef long long ll;
bool dfs(double a[], int n)
{
    if (n == 1 && fabs(a[1] - 24) <= 1e-6)
    {
        return 1;
    }
    double b[6]={0};
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            int p = 1;
            for (int q = 1; q <= n; q++)
            {
                if (q != i && q != j)
                {
                    b[p++] = a[q];
                }
            }
            b[p] = a[i] + a[j];
            if (dfs(b, n - 1))
            {
                return 1;
            }
            b[p] = a[i] - a[j];
            if (dfs(b, n - 1))
            {
                return 1;
            }
            b[p] = a[j] - a[i];
            if (dfs(b, n - 1))
            {
                return 1;
            }
            b[p] = a[i] * a[j];
            if (dfs(b, n - 1))
            {
                return 1;
            }
            if (a[j] != 0)
            {
                b[p] = a[i] / a[j];
                if (dfs(b, n - 1))
                {
                    return 1;
                }
            }
            if (a[i] != 0)
            {
                b[p] = a[j] / a[i];
                if (dfs(b, n - 1))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main(void)
{
    while (1)
    {
        int total = 0;
        double a[6] = {0};
        for (int i = 1; i <= 4; i++)
        {
            scanf("%lf", &a[i]);
            total += a[i];
        }
        if (total == 0)
        {
            break;
        }
        bool fuck=dfs(a,4);
        if (fuck)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}