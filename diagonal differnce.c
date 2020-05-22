#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int k=0,p=0,n,q,i,j, a[100][100];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          scanf("%d",&a[i][j]);
      }
  }
  for(i=0;i<n;i++)
  {
     p=p+a[i][i];
  }
  for(i=0;i<n;i++)
  {
      k=k+a[i][n-1-i];
  }
  q=abs(p-k);
   printf("%d",q);
}
