#include<stdio.h>
int main()
{
  int a,b,c,total;
  float per;
  printf("ENTER THE MARKS OF HTML:");
  scanf("%d",&a);
  printf("ENTER THE MARKS OF CSS:");
  scanf("%d",&b);
  printf("ENTER THE MARKS OF JAVASCRIPT:");
  scanf("%d",&c);

  total=a+b+c;
  printf("\n TOTAL IS:%d",total);

  per=total/3;
  printf("\n PERCENTAGE IS: %.2f",per);

  if(per>=70)
  printf("\n DISTINCTION");
  if(per>=60 && per<70)
  printf("\n FIRST CLASS");
  if(per>=50 && per<60)
  printf("\n SECOND CLASS");
  if(per>=40 && per<50)
  printf("\n PASS");
  else
  printf("\n FAIL");
}
