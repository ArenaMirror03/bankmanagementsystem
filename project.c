#include<stdio.h>

void kaushik_display();
void check_even_odd();
int number;

int main()
{

   kaushik_display();
   printf("\nenter any number : ");
   scanf("%d",&number);

   check_even_odd(); 
 
    return 0;
}

void kaushik_display()
{
    printf("This is kaushik");
}

void check_even_odd()
{
    if(number % 2 == 0)
    {
        printf("this is even number");
    }
    else
    {
        printf("this is odd number");
    }

}