/*#include <stdio.h>
int main(void)
{
    {
        int x;
        int i;
        scanf("%d", &x);
        // 条件少时可能用while更方便
        for (i = 0;; i++) // i没有限制条件，所以需要break
        {
            if (x != 0)
            {
                x /= 10;
            }
            else
            {
                printf("%d\n", i);
                break;
            }
        }
        return 0;
    }
}*/

