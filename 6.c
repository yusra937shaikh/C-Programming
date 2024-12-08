#include<stdio.h>
int main()
{
  int a,b,c,d,e,total;
  float per;
  printf("ENTER THE MARKS OF SUB 1:");
  scanf("%d",&a);
  printf("ENTER THE MARKS OF SUB 2:");
  scanf("%d",&b);
  printf("ENTER THE MARKS OF SUB 3:");
  scanf("%d",&c);
  printf("ENTER THE MARKS OF SUB 4:");
  scanf("%d",&d);
  printf("ENTER THE MARKS OF SUB 5:");
  scanf("%d",&e);

  total=a+b+c+d+e;
  printf("TOTAL IS: %d\n",total);

  per=total/5;
  printf("PERCENTAGE IS: %.2f",per);
  printf("\n");
  return 0;
}
