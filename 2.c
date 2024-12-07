AREA OF CIRCLE AND CIRCUMFERENCE OF THE CIRCLE
#include<stdio.h>
int main()
{
float pi=3.14,r,aoc,croc;
printf("ENTER THE RADUS OF THE CIRCLE:");
scanf("%f",&r);
aoc=pi*r*r;
printf("AREA OF CIRCLE IS: %.2f\n",aoc);
croc=2*pi*r;
printf("CIRCUMFERENCE OF THE CIRCLE IS %.2f\n",croc);
}
