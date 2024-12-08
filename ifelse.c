#include<stdio.h>
int main()
{
  int year;
  printf("ENTER THE YEAR:");
  scanf("%d",&year);

  if(year%4==0)
  {
    printf("%d YEAR IS LEAP YEAR\n",year);
  }
  else
  {
    printf("%d YEAR IS NOT LEAP YEAR\n",year);
  }
  printf("\n");
  return 0;
}
