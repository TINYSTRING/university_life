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
/*尚未完成......(dp)*/
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
/*#include <stdio.h>
long long a[105][105] = {0};
int main(void)
{
	int m = 0, l = 0;
	int N;
	scanf("%d", &N);
	for (int i = 0; i <= N + 1; i++)
	{
		a[0][i] = 255;
		a[i][0] = 255;
		a[i][N + 1] = 255;
		a[N + 1][i] = 255;
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (a[i][j] <= 50)
			{
				m += 1;
				if (a[i - 1][j] > 50 || a[i][j - 1] > 50 || a[i + 1][j] > 50 || a[i][ + 1] > 50)
				{
					l += 1;
				}
				}
		}
	}
	printf("%d %d", m, l);
	return 0;
}*/
/*肿瘤检测*/
/*#include <stdio.h>
long long a[16];
int main(void)
{
	int n;
	for (n = 1;; n++)
	{
		scanf("%d", &a[n]);
		if (a[n] == 0)
		{
			break;
		}
	}
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		for (int  = 1; j < n; j++)
		{
			if (a[i] <= a[j])
			{
				continue;
			}
			else if (a[i] == a[j] * 2)
			{
				sum += 1;
			}
		}
	}
	printf("%d",sum);
	return 0;
}*/
/*两倍*/
/*#include<stdio.h>

int main()
{
	int i;
	int x, y, z;
	for (i = 100; i < 1000; i++)
	{
		x = i % 10; // a为个位数字，b为十位数字，c为百位数字
		y = i / 10 % 10;
		z = i / 100;

		if (i == (x * x * x + y * y * y + z * z * z))
		{
			printf("%d\n", i);
		}
	}
	return 0;
}*/
/*打印水仙花数*/
/*#include <stdio.h>
int a[15] = {0};
int main(void)
{
	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &a[i]);
	}
	int h;
	scanf("%d", &h);
	int sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		if (a[i] <= h + 30)
		{
			sum++;
		}
	}
	printf("%d", sum);
	return 0;
}*/
/*A - 陶陶摘苹果*/
/*#include <stdio.h>
int a[10005] = {0};
int main(void)
{
	int len, m;
	scanf("%d%d", &len, &m);
	for (int i = 0; i <= len; i++)
	{
		a[i] = 1;
	}
	int l, r;
	while (m--)
	{
		scanf("%d%d", &l, &r);
		for (int i = l; i <= r; i++)
		{
			a[i] = 0;
		}
	}
	int sum = 0;
	for (int i = 0; i <= len; i++)
	{
		sum += a[i];
	}
	printf("%d",sum);
	return 0;
}*/
/*B - 校门外的树*/
/*#include <stdio.h>
#define N 10005
int a[N], b[N], g[N], k[N];
int main(void)
{
	int n, x, y;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d%d%d%d", &a[i], &b[i], &g[i], &k[i]);
	}
	int ans = -1;
	scanf("%d%d", &x, &y);
	for (int i = n; i >= 1; i--)
	{
		if (x >= a[i] && y >= b[i] && x <= a[i] + g[i] && y <= b[i] + k[i])
		{
			ans = i;
			break;
		}
	}
	printf("%d", ans);
	return 0;
}*/
/*C - 铺地毯*/
/*#include <stdio.h>
int main()
{
	int a,b,c;
	for(a=123;a<=333;a++)
			{
				b=a*2;
				c=a*3;
				if((a/100+a/10%10+a%10+b/100+b/10%10+b%10+c/100+c/10%10+c%10==45)&&((a/100)*(a/10%10)*(a%10)*(b/100)*(b/10%10)*(b%10)*(c/100)*(c/10%10)*(c%10)==362880))
					printf("%d %d %d\n",a,b,c);
			}
	return 0;
}*/
/*D - 三连击*/
/*#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	int h;
	for (h = 1; n > h; h++)
	{
		n -= h;
	}
	if (h % 2 == 0)
	{
		printf("%d/%d", n, h + 1 - n);
	}
	else
	{
		printf("%d/%d", h + 1 - n, n);
	}

	return 0;
}*/
/*E - Cantor 表*/
/*#include <stdio.h>
int expect, cb, jg, down; // 政府预期价,成本,最大价格,最后一个价位往后的递减数
int xl[100010];			  // 定义销售量
int getmax(int gqs)		  // 修改数
{
	int maxm = -100000, maxa; // maxa记录总利润最大时单价为多少
	for (int i = cb; i < jg; i++)
	{									// 只用从成本遍历到最大价格
		int k = (i - cb + gqs) * xl[i]; // 计算总利润
		if (k >= maxm)
			maxm = k, maxa = i; // 修改
	}
	return maxa;
}
int main()
{
	int c, d,a, b,i;
	scanf("%d%d%d", &expect, &c, &d); // 读入成本和对应的销售量
	xl[c] = d;						  // xl[i]表示i元时对应的销售量
	cb = c;
	while (scanf("%d%d", &a, &b) && a != -1 && b != -1)
	{
		for (i = c + 1; i <= a; i++)
		{
			xl[i] = d - (b - d) / (c - a) * (i - c); // 两点线性公式
		}
		c = a;
		d = b; // 准备下一次读入
	}
	scanf("%d", &down); // 读入超出expect时销售量的变化

	for (i = c + 1;; i++)
	{
		xl[i] = xl[i - 1] - down;
		if(xl[i]<0){
			break;
		}
	}
	jg = i - 1;
	int sss = getmax(0); // 用于判断补贴或税收
	// 总利润与单利润构成一个上凸型的函数，函数移动“左加右减“
	if (sss == expect)
	{
		printf("0");
	}
	 // 补贴
		if (sss > expect)
		{
			for (i = 1; i < jg; i++)
			{
				if (getmax(i) == expect)
				{					 // 找到
					printf("%d", i); // 输出
					return 0;		 // 返回
				}
			}
			printf("NO SOLUTION"); // 没找到
		}
		 // 税收
			if (sss < expect)
			{
				for (i = -1; i > -jg; i--)
				{
					if (getmax(i) == expect)
					{
						printf("%d", i);
						return 0;
					}
				}
				printf("NO SOLUTION");
			}
	return 0;
}*/
/*F-税收与补贴问题*/
/*#include <stdio.h>
#include <math.h>
long long gcd(long long n, long long m)
{
	long long t;
	if (m < n)
	{
		t = n;
		n = m;
		m = t;
	}
	while (n != 0)
	{
		t = m % n; // 储存余数
		m = n;
		n = t;
	}
	return m;
	/*if(n==0){
		return m;
	}else{
		return gcd(m%n,n);
	}*/
/*}
long long x, y;
long long nm, ans = 0;
int main(void)
{

	scanf("%lld%lld", &x, &y);

	nm = x * y;

	for (int i = 1; i <= sqrt(x * y); i++)//sqrt()能优化时间
	{
		if (nm % i == 0 && gcd(i, nm / i) == x)
		{
			ans += 2;
			if (i * i == nm)
			{
				ans--;
			}
		}
	}
	printf("%lld", ans);
	return 0;
}*/
/*G - 最大公约数和最小公倍数问题*/
/*#include <stdio.h>
#include <string.h>
long long expect[50005][3] = {0};
int mark[500005] = {0};
int chair[50005] = {0};
int dis[50005] = {0}, sum[50005] = {0}; // 分别记录距离，相同距离的个数
int main(void)
{
	int n;
	scanf("%d", &n);
	int dsb = n;
	int i = 0;
	while (dsb--)
	{
		++i;
		scanf("%lld%lld", &expect[i][1], &expect[i][2]);
	}
	for (i = 1; i <= n; i++)
	{
		for (int j = 1; j <= 2; j++)
		{
			mark[expect[i][j]]++; // 被三人以上爱着的情况只是幻想（因为我没有过）
		}
	}
	for (int j = 1; j <= n; j++)
	{
		if (mark[j] >= 3)
		{
			printf("-1");
			return 0; // 结束这场戏剧
		}
	}
	int temp;  // 用于储存
	int joker; // 用于储存小丑（世界上本来没有小丑，爱的人多了也就有了）
	for (i = 1; i <= n; i++)
	{
		for (int j = 1; j <= 2; j++)
		{
			temp = expect[i][j];
			joker = -1;
			for (int t = 1; t <= 2; t++)
			{
				if (expect[temp][t] != i)
				{
					joker++; // 如果你喜欢的不喜欢你，那你只是小丑而已
					if (joker == 1)
					{
						printf("-1");
						return 0; // 小丑的退场
					}
				}
			}
		}
	}
	for (int j = 1; j <= n; j++)
	{
		chair[j] = j;
	}
	chair[2] = expect[1][1];

	for (int i = 3; i <= n; i++)
	{
		if (expect[chair[i - 1]][1] == chair[i - 2])
		{
			chair[i] = expect[chair[i - 1]][2];
		}
		else
		{
			chair[i] = expect[chair[i - 1]][1];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		dis[chair[i]] = (i - chair[i] + n) % n; // 顺时针判断距离，+n防止为负（求负数的余数）
		sum[dis[chair[i]]]++;
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (sum[i] >= ans)
		{
			ans = sum[i];
		}
	}
	memset(sum, 0, sizeof(sum));
	memset(dis, 0, sizeof(dis));
	for (int i = 1; i <= n; i++)
	{
		dis[chair[i]] = (i - (n - chair[i] + 1) + n) % n; // 逆时针判断距离
		sum[dis[chair[i]]]++;
	}
	for (int i = 0; i < n; i++)
	{
		if (sum[i] >= ans)
		{
			ans = sum[i];
		}
	}
	printf("%d", n - ans);
	return 0; // 没有人受伤的世界达成了（大老师靠着墙缓缓说道）
}*/
/*M - 篝火晚会*/
/*#include <stdio.h>
#include <math.h>
char temp[62550];
int main(void)
{
	char a;
	int i = 0;
	while (scanf("%c", &a) && a != 'E')
	{
		++i;
		temp[i] = a;
	}
	int w = 0, l = 0;
	// 11分
	for (int j = 1; j <= i; j++)
	{
		if (temp[j] == 'W')
		{
			w++;
		}
		if (temp[j] == 'L')
		{
			l++;
		}
		if ((w >= 11 || l >= 11) && abs(w - l) > 1)
		{
			printf("%d:%d\n", w, l);
			w = 0;
			l = 0;
		}
	}
	printf("%d:%d\n", w, l);
	printf("   \n");
	// 21分
	w = 0;
	l = 0;
	for (int j = 1; j <= i; j++)
	{
		if (temp[j] == 'W')
		{
			w++;
		}
		if (temp[j] == 'L')
		{
			l++;
		}
		if ((w >= 21 || l >= 21) && abs(w - l) > 1)
		{
			printf("%d:%d\n", w, l);
			w = 0;
			l = 0;
		}
	}
	printf("%d:%d\n", w, l);
	return 0;
}*/
/*H-乒乓球*/