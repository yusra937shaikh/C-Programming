#include<stdio.h>
int main()
{
  int f;
  float c;
  printf("ENTER THE VALUE OF F:");
  scanf("%d",&f);
  c=((f-32)*5)/9;
  printf("CELCIUS IS %.2f",c);
  printf("\n");
  return 0;
}
