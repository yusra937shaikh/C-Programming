#include<stdio.h>
int main()
{
  int x,a;
  printf("ENTER YOUR CHOICE(1-2)\n");
  scanf("%d",&a);
  
  if(a==1)
  {
    printf("ENTER THE VALUE OF X:");
    scanf("%d",&x);
    printf("SQUARE IS %d",x*x);
  }
  else if(a==2)
  { 
    printf("ENTER THE VALUE OF X:");
    scanf("%d",&x);
    printf("CUBE IS %d",x*x*x);
  }
 else
 {
   printf("INVALID CHOICE. PLEASE TRY AGAIN");
 }
}
