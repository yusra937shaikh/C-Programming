#include<stdio.h>
int main()
{
  int a,b,c;
  printf("ENTER THE VALUE OF A:");
  scanf("%d",&a);
  printf("ENTER THE VALUE OF B:");
  scanf("%d",&b);
  printf("ENTER THE VALUE OF C:");
  scanf("%d",&c);
  
  if(a>b && a>c)
  printf("A IS BIG");
  
  if(b>a && b>c)
  printf("B IS BIG");
  
  if(c>a && c>b)
  printf("C IS BIG");
}
