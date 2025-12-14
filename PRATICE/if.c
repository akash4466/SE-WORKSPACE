#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);

    if(a>=70)
    {
        printf("A");
    }
    if(a>=60)
    {
        printf("B");
    }
    if(a>=50)
    {
        printf("C");
    }
    if(a>=40)
    {
        printf("D");
    }
    else
    {
        printf("E");
    }
    getch();
}