#include<stdio.h>
int main()
{
  int year;
  float pa,rate,si;
  printf("ENTER THE VALUE OF PRINCIPAL AMOUNT:");
  scanf("%f",&pa);
  printf("ENTER THE VALUE OF RATE:");
  scanf("%f",&rate);
  printf("ENTER THE VALUE OF YEAR:");
  scanf("%d",&year);
  si=(pa*rate*year)/100;
  printf("SIMPLE INTEREST IS:%.2f",si);
  printf("\n");
  return 0;
}
