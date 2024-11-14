#include <stdio.h>

int numbers[10];
int main()

{


    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++) 
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

    }

    printf("\nYou entered:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}