/*#include<stdio.h>
int a[100][100];
int main(void)
{
  int n;
  
  
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=i;j++)
    {
      scanf("%d",&a[i][j]);
    }
    
  }
  int max=0;

    for(int i=n-2;i>=0;i--)
    {
      for(int j=0;j<=i;j++)
      {
        int max = (a[i+1][j] >= a[i+1][j + 1]) ? a[i+1][j] : a[i+1][j + 1];
        a[i][j]+=max;
      }
     }
    
    printf("%d",a[0][0]);
    return 0;
  

}*/
/*以上为数字三角形
（二维数组）
*/







