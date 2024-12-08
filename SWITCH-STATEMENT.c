#include<stdio.h>
int main()
{
  int choice;
  printf("ENTER YOUR CHOICE (1-7):");
  scanf("%d",&choice);
  
  switch(choice)
  {
    case 1:
    printf("SUNDAY");
    break;
    
    case 2:
    printf("MONNDAY");
    break;
    
    case 3:
    printf("TUESDAY");
    break;
    
    case 4:
    printf("WEDNESDAY");
    break;
    
    case 5:
    printf("THURSDAY");
    break;
    
    case 6:
    printf("FRIDAY");
    break;
    
    case 7:
    printf("SATURDAY");
    break;
    
    default:
    printf("INVALID CHOICE. PLEASE TRY AGAIN!");
  }
}
