/*#include<stdio.h>
int main()
{
    const int n=10;
    int arr[1000];
    int i,x;
    int sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     scanf("%d",&x);
    for(i=0;i<n;i++){
        if(arr[i]<=x+30){
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}*/
#include <stdio.h>
// int diff(int n);
// int prefix(int n);
//校门外的树
int main()
{
    int length;
    int m;
    int a[10001]; // prefix[10000],diff[10000];
    int i;
    int l, r;
    int sum=0;
    scanf("%d%d", &length, &m);
    for (i = 0; i <= length; i++)
    {
        a[i] = 1;
    }
    while(m--){
    scanf("%d%d",&l,&r);
    for(i=l;i<=r;i++){
        a[i]=0;
    }
    }
    for(i=0;i<=length;i++){
        sum+=a[i];
        }
        printf("%d",sum);
    return 0;
}
/*int diff(int n)
{
    int diff[10000]
    for(int i=1;i<n;i++){
        diff[i]=a[i]-a[i-1];
    }
}*/
/*int prefix(int n)
{
    int prefix[10000];
    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+a[i];
    }
}*/


/**/