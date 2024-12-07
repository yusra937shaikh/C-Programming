AREA OF RECTANGLE AND AREA OF SQUARE.
#include<stdio.h>
int main()
{
float l,w,aor,aos;
printf("ENTER THE VALUE OF LENGTH:\n");
scanf("%f",&l);
printf("ENTRE THE VALUE OF WIDTH:\n");
scanf("%f",&w);
aor=l*w;
printf("AREA OF RECTANGLE IS :%.2f\n",aor);
aos=l*l;
printf("AREA OF SQUARE IS :%.2f\n",aos);
printf("\n");
return 0;
}
