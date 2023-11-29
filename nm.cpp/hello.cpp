#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2000;// 字符大小 ， 没压位
struct BigInt
{
	int len, s[MAXN];
	BigInt () // 初始化
	{
		memset(s, 0, sizeof(s));
		len = 1;
	}
	BigInt (int num) { *this = num; }
	BigInt (const char *num) { *this = num; } //让this 指 针 指 向 当 前 字 符 串
	BigInt operator = (const int num)
	{
		char s[MAXN];
		sprintf(s, "%d", num); //sprintf 函 数 将 整 型 映 到 字 符 串 中
		*this = s;
		return *this; // 再 将 字 符 串 转 到 下 面 字 符 串 转 化 的 函 数 中
	}
	BigInt operator = (const char *num)
	{
		for(int i = 0; num[i] == '0'; num++) ; // 去前导 0
		len = strlen(num);
		for(int i = 0; i < len; i++) s[i] = num[len-i-1] - '0'; // 反着存
		return *this;
	}
	BigInt operator + (const BigInt &b) const // 对应 位 相加 ， 最为简单
	{
		BigInt c;
		c.len = 0;
		for(int i = 0, g = 0; g || i < max(len, b.len); i++)
		{
			int x = g;
			if(i < len) x += s[i];
			if(i < b.len) x += b.s[i];
			c.s[c.len++] = x % 10; // 关 于 加 法 进 位
			g = x / 10;
		}
		return c;
	}
	BigInt operator += (const BigInt &b) // 如上 文 所说 ， 此 类 运 算 符 皆 如 此 重 载
	{
		*this = *this + b;
		return *this;
	}
	void clean() // 由 于 接 下 来 的 运 算 不 能 确 定 结 果 的 长 度 ， 先 大 而 估 之 然 后 再 查
	{
		while(len > 1 && !s[len -1]) len --; // 首位部分 ‘0’ 故 删 除 该 部 分 长 度
	}
	BigInt operator * (const BigInt &b) // 乘 法 重 载 在 于 列 竖 式 ， 再 将 竖 式 中 的 数 转 为 抽 象 ， 即 可  出 运 算 法 则 。
	{
		BigInt c;
		c.len = len + b.len;
		for(int i = 0; i < len; i++)
		{
			for(int j = 0; j < b.len; j++)
			{
				c.s[i+j] += s[i] * b.s[j];// 不 妨 列 个 竖 式 看 一 看
			}
		}
		for(int i = 0; i < c.len; i++) // 关于进位 ， 与加 法 意同
		{
			c.s[i+1] += c.s[i]/10;
			c.s[i] %= 10;
		}
		c.clean(); // 我 们 估 的 位 数 是 a+b 的长度和 ， 但 可 能 比 它 小 （1*1 = 1）
		return c;
	}
	BigInt operator *= (const BigInt &b)
	{
		*this = *this * b;
		return *this;
	}
	BigInt operator - (const BigInt &b) // 对应 位 相减 ， 加 法 的 进 位 改 为 借 1
	{ // 不考 虑 负数
		BigInt c;
		c.len = 0;
		for(int i = 0, g = 0; i < len; i++)
		{
			int x = s[i] - g;
			if(i < b.len) x -= b.s[i]; // 可 能 长 度 不 等

			if(x >= 0) g = 0; // 是 否 向 上 移 位 借 1
			else
			{
				g = 1;
				x += 10;
			}
			c.s[c.len++] = x;
		}
		c.clean();
		return c;
	}
	BigInt operator -= (const BigInt &b)
	{
		*this = *this - b;
		return *this;
	}
	BigInt operator / (const BigInt &b) // 运 用 除 是 减 的 本 质 ， 不停地减 ， 直 到 小 于 被 减 数
	{
		BigInt c, f = 0; // 可 能 会 在 使 用 减 法 时 出 现 高 精 度 运 算
		for(int i = len -1; i >= 0; i--) // 正常顺序 ， 从 最 高 位 开 始
		{
			f = f*10; // 上 面 位 的 剩 余 到 下 一 位 *10
			f.s[0] = s[i]; // 加上 当 前位
			while(f >= b)
			{
				f -= b;
				c.s[i]++;
			}
		}
		c.len = len; // 估最长位
		c.clean();
		return c;
	}	
	BigInt operator /= (const BigInt &b)
	{
		*this = *this / b;
		return *this;
	}
	BigInt operator % (const BigInt &b) // 取 模 就 是 除 完 剩 下 的
	{
		BigInt r = *this / b;
		r = *this - r*b;
		r.clean();
		return r;
	}
	BigInt operator %= (const BigInt &b)
	{
		*this = *this % b;
		return *this;
	}
	bool operator < (const BigInt &b) // 字 符 串 比 较 原 理
	{
		if(len != b.len) return len < b.len;
		for(int i = len -1; i != -1; i--)
		{
			if(s[i] != b.s[i]) return s[i] < b.s[i];
		}
		return false;
	}
	bool operator > (const BigInt &b) // 同理
	{
		if(len != b.len) return len > b.len;
		for(int i = len -1; i != -1; i--)
		{
			if(s[i] != b.s[i]) return s[i] > b.s[i];
		}
		return false;
	}
	bool operator == (const BigInt &b)
	{
		return !(*this > b) && !(*this < b);
	}
	bool operator != (const BigInt &b)
	{
		return !(*this == b);
	}
	bool operator <= (const BigInt &b)
	{
		return *this < b || *this == b;
	}
	bool operator >= (const BigInt &b)
	{
		return *this > b || *this == b;
	}
	string str() const // 将 结 果 转 化 为 字 符 串 （ 用于输出 ）
	{
		string res = "";
		for(int i = 0; i < len; i++) res = char(s[i]+'0')+res;
		return res;
	}
};
istream& operator >> (istream &in, BigInt &x) // 重载 输 入流
{
	string s;
	in >> s;
	x = s.c_str(); //string 转化为 char[]
	return in;
}
ostream& operator << (ostream &out, const BigInt &x) // 重载 输出 流
{
	out << x.str();
	return out;
}
struct BigInt ans[5005]={0};
int main(void)
{
    int n;
    scanf("%d",&n);
    ans[1]=1;
    ans[2]=2;
    for (int i = 1; i <= n-2; i++)
    {
        ans[i+2]=ans[i+1]+ans[i];
    }
    cout << ans[n] << endl;
    return 0;
}