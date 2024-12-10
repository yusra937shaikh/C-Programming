#include<stdio.h>
int main()
{
  int i=65,j;
  for(i=65;i<=69;i++)
  {
    for(j=65;j<=i;j++)
    {
      printf(" %c",j);
    }
    printf("\n");
  }
  
  for(i=68;i>=65;i--)
  {
    for(j=65;j<=i;j++)
    {
      printf(" %c",j);
    }
    printf("\n");
  }
  return 0;
}
