#include<stdio.h>

char number(int x)
{
if(x%2==0)
{
    printf("\n Even number :");
}
else
{
    printf("\n odd number");

}


}

void tarique_display();
int main()
{
 tarique_display();
 int a;
printf("\n Please enter any number ");
scanf("%d",&a);
printf("%c",number(a));

    return 0;

}
void tarique_display()
{
    printf(" this is TARIQUE ");
}