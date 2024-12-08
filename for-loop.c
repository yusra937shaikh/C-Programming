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


#include<stdio.h>
int main()
{
  int n,i,f=1;
  printf("\n ENTER THE NUMBER:");
  scanf("%d", &n);
  for(i=n;i>=1;i--)
    {
      f*=i;
    }
printf("\n FACTORIAL OF %d is :%d",n,f);
}
