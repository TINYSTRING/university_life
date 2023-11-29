/*#include <stdio.h>
int arr[10];
int main(void)
{
    int i = 0;
    char a;
    int times = 13;
    int sum = 0;

    while (times--)
    {
        scanf("%c", &a);
        if (a == '-')
        {
            continue;
        }
        ++i;

        if (times == 0)
        {
            break;
        }
        a = a - '0';
        sum += a * i;
        arr[i] = a;
    }
    sum %= 11;
    if(a=='X'){
        if(sum==10){
            printf("Right\n");
        }else{
            printf("%d-%d%d%d-%d%d%d%d%d-%d\n", arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9], sum);
        }
        return 0;
    }
    a=a-'0';
    if (sum == a)
    {
        printf("Right\n");
    }
    else if(sum==10)
    {
        printf("%d-%d%d%d-%d%d%d%d%d-X\n", arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
    }else{
        printf("%d-%d%d%d-%d%d%d%d%d-%d\n", arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9], sum);
    }

    return 0;
}*/
/*I - ISBN 号码*/
/*#include <stdio.h>
char a[27];
char b[27] = {'0', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int map[27] = {0};
int main(void)
{
    int s, t, w;
    scanf("%d%d%d\n", &s, &t, &w);
    //（getchar(); // 吃掉换行符）在洛谷上面运行是用linux，换行是\r\n,一个getchar吃不完，本地是用win所以要在scanf添加一个\n,保证读完

    int temp = w + 1; // 暂存
    int i = 0;
    char arr;
    while (temp--)
    {
        scanf("%c", &arr);
        if (arr == ' ')
        {
            temp++;
            continue;
        }
        ++i;
        a[i] = arr; // 初始化
    }

    for (i = w; i >= 1; i--)
    {
        for (int j = 1; j <= t; j++)
        {
            if (a[i] - '0' == b[j] - '0')
            {
                map[i] = j; // 输出a[i]对应的序号
            }
        }
    }
    map[w + 1] = t + 1;
    int count = 0;
    for (i = w; i >= 1;)
    {
        if (map[i] == t || map[i] + 1 == map[i + 1])
        {
            --i; // 如果不能增加，数位-1
            continue;
        }
        if (map[i] + 1 < map[i + 1])
        {
            ++map[i]; // 对应的数位上的数+1
            for (int j = i; j < w; j++)
            {
                map[j + 1] = map[j] + 1; // 后面都要+1
            }
            for (int q = 1; q <= w; q++)
            {
                if (q < w)
                {
                    printf("%c", b[map[q]]);
                }
                else
                {
                    printf("%c\n", b[map[q]]);
                    i = w;
                    count++;
                    if (count == 5)//输出5个停下
                    {
                        break;
                    }
                }
            }
        }
        if (count == 5)
        {
            break;
        }
    }
    return 0;
}*/
/*J - Jam 的计数法(有点小问题)*/
/*#include <stdio.h>
#include <algorithm>
long long a[100050]={0};
int main(void) {
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%ld",&a[i]);
    }
    std::sort(a,a+N+1);//要多加1；a+N+1：最后一个元素的下一个位置的指针
    for(int i=1;i<=N;i++){
        printf("%d ",a[i]);
    }
    return 0;
}*/
/*B - 排序*/
/*#include <stdio.h>
#include <algorithm>
int a[5000000]={0};
int main(void) {
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    std::sort(a,a+n);
    printf("%d",a[k]);
    return 0;
}*/
/*C - 求第 k 小的数开o2能过（nth_element）*/
/*#include <stdio.h>
#include <algorithm>
int a[105] = {0};
int b[105] = {0};
int count[1050] = {0};
int main(void)
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= N; i++)
    {
        ++count[a[i]];
        if (count[a[i]] >= 2)
        {
            a[i] = 0;
        }
    }
    int j = 0;
    for (int i = 1; i <= N; i++)
    {
        if (a[i] != 0)
        {
            b[j] = a[i];
            j++;
        }
    }
    std::sort(b, b + j + 1);
    printf("%d\n", j);
    for (int i = 1; i <= j; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}*/
/*D - 明明的随机数*/
/*#include <stdio.h>
#include <algorithm>
int H[10050]={0};
int main(void) {
    int N;
    long long B;
    scanf("%d%d",&N,&B);
    for(int i=1;i<=N;i++){
        scanf("%d",&H[i]);
    }
    std::sort(H,H+N+1);
    int sum=0;
    for(int i=N;i>=1;i--){
        
        if(sum<B){
            sum+=H[i];
        }else{
            printf("%d",i);
            break;
        }
    }

    return 0;
}*/
/*E - Bookshelf B*/
/*#include <stdio.h>
#include <algorithm>
#include <math.h>
int a[1050]={0};
int diff[1050]={0};
int main(void) {
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++){
        diff[i]=fabs(a[i+1]-a[i]);
        
    }
    std::sort(diff,diff+n);
    int count=0;
    for(int i=1;i<n;i++){
        if(diff[i]!=i){
            count++;
        }
    }
    if(count==0){
        printf("Jolly");
    }else{
        printf("Not jolly");
    }

    return 0;
}*/
/*F - 欢乐的跳*/
/*#include <stdio.h>
#include <algorithm>
#include <ctype.h>
int arr[105] = {0};

int main(void)
{
    int count=0;
    char temp;
    while((temp=getchar())!='\n'){
        if(isdigit(temp)){
            ungetc(temp,stdin);
            scanf("%d",&arr[++count]);
        }
    }
    std::sort(arr,arr+count+1);
    for(int i=1;i<=count;i++){
        if(i<=count-1){
            printf("%d ",arr[i]);
            }else{
                printf("%d",arr[i]);
            }
    }
    return 0;
}*/
/*冒泡排序（有新东西）*/
/*#include <stdio.h>
#include <algorithm>
#include <string.h>
struct mmp
{
    int count=0;//记录’1‘的总个数
    char s[205];//记录具体的字符，以便遍历
    int before;//记录排序前的序号
};
struct mmp a[105];
bool cmp(mmp x,mmp y){
    if(x.count==y.count){
        return x.before<y.before;
    }
    return x.count<y.count;
}
int main(void) {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s",a[i].s);
        a[i].before=i;
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<strlen(a[i].s);j++){
            if(a[i].s[j]=='1'){
                a[i].count++;
            }
        }
    }
    std::sort(a,a+n+1,cmp);
    for(int i=1;i<=n;i++){
        printf("%s\n",a[i].s);
    }
    return 0;
}*/
/*J - 按1的个数排序(有新东西)*/
/*#include <stdio.h>
#include <algorithm>
#include <string.h>
double jj[45]={0};
double oo[45]={0};
bool cmp(double x,double y){
    return x>y;
}
int main(void) {
    char jb[10];
    int n;
    scanf("%d",&n);
    int i=0,j=0;
    char * s1="male";
    while (n--)
    {
        scanf("%s",jb);
        
        if(strcmp(jb,s1)==0)
        {
            ++i;
            scanf("%lf",&jj[i]);
        }else
        {
            ++j;
            scanf("%lf",&oo[j]);
        }
    }
    std::sort(jj,jj+i+1);
    std::sort(oo,oo+j+1,cmp);
    for(int q=1;q<=i;q++){
        printf("%.2lf ",jj[q]);
    }
    for(int w=0;w<j;w++){
        printf("%.2lf ",oo[w]);
    }
    return 0;
}*/
/*K - 合影效果(字符串的比较)*/
/*#include <stdio.h>
#include <algorithm>
struct ggb
{
    char id[11];
    int age;
    int before;
};
struct ggb a[105]={0};
bool cmp(ggb x,ggb y)
{
    if((x.age<60 && y.age<60)||(x.age==y.age)){
        return x.before<y.before;
    }else{
        return x.age>y.age;
    }
    
}
int main(void) {
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%s",&a[i].id);
        scanf("%d",&a[i].age);
        a[i].before=i;
    }
    std::sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++){
        printf("%s\n",a[i].id);
    }
    
    return 0;
}*/
/*L - 病人排队*/