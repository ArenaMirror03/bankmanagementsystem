#include<stdio.h>

int main()
{
  
int numbers[10];

  printf("Please enter 10 numbers:");

  for(int i =0; i<10; i++)
  {
    
   printf("Number %d:",i+1);
   scanf("%d", &numbers[i]);
  }

  printf("The numbers are: ");
  for (int i = 0; i < 10; i++)
  {
   printf("%d",numbers[i]);
  }
  
 return 0;
}