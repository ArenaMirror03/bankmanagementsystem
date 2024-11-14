#include<stdio.h>


 int main()
 {
    int numbers[10];
    int i;

    printf("Enter ten numbers : ");
    for( i=0;i<10;i++)
    {
       scanf("%d",&numbers[i]);
    }

    printf("the numbers are :");
    for(i=0;i<10;i++)
    {
        printf(" %d ",numbers[i]);
    }


    return 0;
 }