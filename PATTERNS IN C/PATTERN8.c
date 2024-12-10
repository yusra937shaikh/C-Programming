#include<stdio.h>
int main()
{
  int n=5,i,j;
  for(i=0;i<n;i++)
  {
    for(j=n;j>i;j--)
    {
      printf("%d ",j);
    }
    for(j=0;j<2*i;j++)
    {
      printf("  ");
    }
    for(j=i+1;j<=n;j++)
    {
      printf("%d ",j);
    }
    printf("\n");
  }
  return 0;
}
