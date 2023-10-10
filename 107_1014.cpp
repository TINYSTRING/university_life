/*#include <stdio.h>
int main(void)
{
	int a, b, c, d;
	int n;
	scanf("%d", &n);
	for (a = 2; a <= n; a++)
	{
		for (b = 2; b < a; b++)
		{
			for (c = b+1; c < a; c++)
			{
				for (d = c+1; d < a; d++)
				{
					if (a*a*a == b*b*b + c*c*c + d*d*d)
					{
						printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, d);
					}
				}
			}
		}
	}

	return 0;
}*/
/*完美立方*/
/*#include <stdio.h>
long long a[505], b[505],c[505];
long long f[505][505];
int main(void)
{
	int n, m;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	for (int j = 1; j <= m; j++)
	{
		scanf("%d", &b[j]);
	}
	int len=0;
	int q=0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (a[i] == b[j])
			{
				if(j>q){
					q=j;
					c[++len]=b[j];

				}
				f[i][j] = f[i - 1][j - 1] + 1;
			}
			else
			{
				if (f[i][j - 1] >= f[i - 1][j])
				{
					f[i][j] = f[i][j - 1];
				}
				else
				{
					f[i][j] = f[i - 1][j];
				}
			}
		}
	}
	printf("%d\n", f[n][m]);
	for(int i=1;i<=f[n][m];i++){
		printf("%d ",c[i]);
	}

	return 0;
}*/
/*尚未完成......*/
/*#include <stdio.h>
#include <math.h>
char begin[3], end[3];
int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%s%s", begin, end); // 不用取地址
		int x, y;
		x = abs(begin[0] - end[0]);
		y = abs(begin[1] - end[1]);
		if (x == 0 && y == 0)
		{
			printf("0 0 0 0\n");
		}
		else
		{
			if (x > y)
			{
				printf("%d", x); // 王的走法
			}
			else
			{
				printf("%d", y);
			}
			if (x == 0 || y == 0 || x == y)
			{
				printf(" 1"); // 后的走法
			}
			else
			{
				printf(" 2");
			}
			if (x == 0 || y == 0)
			{
				printf(" 1"); // 车的走法
			}
			else
			{
				printf(" 2");
			}
			if (x == y) // 象的走法
			{
				printf(" 1\n");
			}
			else if (abs(x - y) % 2 == 0)
			{
				printf(" 2\n");
			}
			else
			{
				printf(" Inf\n");
			}
		}
	}
	return 0;
}*/
/*Distance on Chessboard */
/*#include <stdio.h>
int main(void)
{
	int k;
	scanf("%d", &k);
	int sum = 0;
	for (int i = 1; i <= k; i++)
	{
		sum += i;
	}
	sum *= sum;//自然数的立方和==自然数的和的平方
	printf("%d", sum);
	return 0;
}*/
/*整数的立方和 */
/*#include <stdio.h>
int a[11] = {0};
int main(void)
{
	int k;
	scanf("%d", &k);
	while (k--)
	{
		double sum = 0.0;
		for (int i = 1; i <= 10; i++)
		{
			scanf("%d", &a[i]);
		}
		sum = a[1] * 28.9 + a[2] * 32.7 + a[3] * 45.6 + a[4] * 78 + a[5] * 35 + a[6] * 86.2 + a[7] * 27.8 + a[8] * 43 + a[9] * 56 + a[10] * 65;
		printf("%.2f\n", sum);
	}

	return 0;
}*/
/*计算书费*/
#include <stdio.h>

int main(void) {
	

	return 0;
}