#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <iostream>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    ll m=n;
    for (ll i = 2; i*i <=n; i++)
    {
        while (m%i==0)//只要从小开始分解到最后就一定是质数
        {
            m/=i;
            printf("%lld ",i);
        }
    }
    if (m!=1)
    {
        printf("%lld",m);
    }
    printf("\n");
    
}
int main(void)
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        ll n;
        scanf("%lld",&n);
        solve(n);
    }

    return 0;
}