#include<stdio.h>
int main()
{
	int n,i,first=0,second=1,next;
	printf("ENTER THE NUMBER OF TERMS:");
	scanf("%d",&n);
	printf("fibonacci series is :");

	for(i=0;i<n;i++)
	{
	  if(i<=1)
	  {
	    next=i;
	  }
	  else
	  {
	    next=first+second;
	    first=second;
	    second=next;
	  }
	  printf("%d ",next);
	}
	return 0;
}
