#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <iostream>
#include <map>
using namespace std;
typedef long long ll;
int ans = 0;
ll arr[1000000] = {0};
map <long long,int>k;
int e = 0;
bool isprime(int w)
{
    if (k[w])
    {
        return 1;
    }
    for (int i = 2; i * i <= w; i++)
    {
        if (w % i == 0)
        {
            return 0;
        }
    }
    k[w]=1;
    return 1;
}
void print(ll arr[])
{
    for (int i = 1; i < e; i++)
    {
        printf("%lld ", arr[i]);
    }
    printf("%lld\n", arr[e]);
}
bool dfs(int cur, ll x)
{
    for (int i = cur; i <= x; i++)
    {
        if (i == x)
        {
            arr[++e] = i;
            print(arr);
            return 0;
        }
        if (x % i == 0 && isprime(i))
        {
            arr[++e] = i;
            dfs(i, x / i);
            return 0;
        }
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    ll a;
    while (n--)
    {
        scanf("%lld", &a);
        dfs(2, a);
        e = 0;
    }
    return 0;
}