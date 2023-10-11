#include <stdio.h>

int main()
{
    int i;
    int a, b, c; // a为个位数字，b为十位数字，c为百位数字
    for (i = 100; i < 1000; i++)
    {
        a = i % 10;
        b = i / 10 % 10;
        c = i / 100;

        if (i == (a * a * a + b * b * b + c * c * c))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}