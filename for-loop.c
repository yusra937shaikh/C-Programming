FACTORIAL OF NUMBERS AND WHILE LOOP IN FOR LOOP.
#include<stdio.h>
int main()
{
  int num,i,factorial;

  for(num=1;num<=5;num++)
  {
    factorial=1;
    i=1;
    while(i<=num)
    {
      factorial*=i;
      i++;
    }
  printf("FACTORIAL OF %d = %d \n",num,factorial);
  }
return 0;
}
