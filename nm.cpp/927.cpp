/*#include <stdio.h>
int main()
{
    int x;
    int i, j;
    int a;
    scanf("%d", &x);
    i = x / 4;
    a = x % 4;
    if (a == 2)
    {
        i += 1;
        j = x / 2;
         printf("%d %d", i, j);
    }else if(a!=0){
        printf("0 0");
    }else{
        j = x / 2;
         printf("%d %d", i, j);
    }
    return 0;
}*/
/*以上为鸡兔同笼*/
/*#include <stdio.h>
int main()
{
    int a[1000];
    int n, m;
    int i;
    while (scanf("%d%d", &n, &m) == 2 && n != 0 && m != 0)
    {
        int sum = 0;
        int count = 0;
        
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
            if (i == n)
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
/*以上为约瑟夫问题*/
