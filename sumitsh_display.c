#include<stdio.h>

void display();


int a,b,c;

int main(){
    
    printf("enter any number \n");
  scanf("%d", &a);    
    printf("enter any number \n");
  scanf("%d", &b);    
    printf("enter any number \n");
  scanf("%d", &c);

  printf("the final answer is %d \n", a+b-c);    
     display();
}

  void display(){
    printf("This is sumit sharma");
}