#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;
    start = clock();

    /*...
          需要计时的代码
   ...*/
    end = clock();
    printf("time=%f\n", (double)(end - start) / CLOCKS_PER_SEC);
    return 0;
}