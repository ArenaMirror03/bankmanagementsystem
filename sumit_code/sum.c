#include <stdio.h>

int main() {
    int numbers[10]; 
    int sum = 0;      
    
    printf("Enter 10 numbers:\n");

    
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    
    for (int i = 0; i < 10; i++) {
        sum += numbers[i];
    }

    
    printf("The sum of the 10 numbers is: %d\n", sum);

    return 0;
}
