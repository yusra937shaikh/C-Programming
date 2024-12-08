<p>ADDITION,SUBTRACTION,MULTIPLICATION,DIVISION OF TWO VALUES IN C</p>
#include<stdio.h>
int main()
{
 int a,b,sum,sub,mul;
 float div;
 printf("ENTER THE VALUE OF A:");
 scanf("%d",&a);
 printf("ENTER THE VALUE OF B:");
 scanf("%d",&b);
 sum=a+b;
 printf("SUM IS: %d\n",sum);
 sub=a-b;
 printf("SUBTRACTION IS: %d\n",sub);
 mul=a*b;
 printf("MULTIPLICATION IS: %d\n",mul);
 div=a/b;
 printf("DIVISION IS: %.2f\n",div);
}
