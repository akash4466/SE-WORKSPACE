#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter the number:");
    scanf("%d",a);

    switch (a)
    {
        case 1:printf("good");
        break;


        case 2:printf("not");
        break;
        case 3:printf("poor");
        break;
        case 4:printf("rich");
        break;
        default:printf("not vaild");
        break;
        
    }
    getch();
}