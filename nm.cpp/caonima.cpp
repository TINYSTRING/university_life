#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <ctype.h>
char s[305];
int a[305] = {0};
int b[305] = {0};
int main(void)
{
    scanf("%s", s);
    int i;
    int temp = 0;
    int j = 0, mark = 0;
    for (i = 0; i <= strlen(s); i++)
    {
        if (isdigit(s[i]))
        {
            temp = temp * 10 + (s[i] - '0');
            mark = 1;
        }
        else
        {
            a[++j] = temp;
            temp = 0;
        }
    }
    int w = 0;
    for (int q = 0; q <= 305; q++)
    {
        if (a[q] != 0)
        {
            b[++w] = a[q];
        }
    }
    std::sort(b, b + w+1);
    if (mark == 0)
    {
        printf("0");
        return 0;
    }
    for (int i = 1; i <= w; i++)
    {
        if (i < w)
        {
            printf("%d,", b[i]);
        }
        else
        {
            printf("%d", b[i]);
        }
    }

    return 0;
}