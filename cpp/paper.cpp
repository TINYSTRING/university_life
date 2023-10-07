#include <stdio.h>
long long a[105],s=0;
long long b[105];
int main(void)
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    if(a[1]==1){
        b[1]=2;
    }else{
        b[1]=1;
    }
    for(int i=2;i<=n;i++){
            b[i]=b[i-1]+1;
            if(b[i]==a[i]){
                b[i]+=1;
            }
    }
    printf("%d\n",b[n]);
    }

    return 0;
}