#include<stdio.h>
#include<conio.h>
void main()
{
    char a;
    printf("enter the character==");
    scanf("%c",&a);

    switch (a)
    {
        case 'w':printf("new");
        break;
        case 'e':printf("old");
        break;
        case 'f':printf("top");
        break;
        default:printf("notted");
        break;
    }
    getch();
}