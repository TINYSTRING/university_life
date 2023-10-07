#include <stdio.h>
int main()
{
    int a;
    const int b = 38;
    for (int i = 1;; i++)
    {
        scanf("%d", &a);
        if (a > b)
        {
            printf("too big\n");
        }
        else if (a == b)
        {
            printf("good job\n");
            break;
        }
        else if (a < b)
        {
            printf("too small\n");
        }
    }
    return 0;
}

