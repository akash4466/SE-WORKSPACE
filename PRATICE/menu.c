#include<stdio.h>
#include<conio.h>

void main()
{
    int food,bill;
    printf("enter food number=");
    scanf("%d",&food);

    switch (food)
    {
    case 1:
    bill+=100;
    printf("pizza %d",bill);
    break;
    case 2:
    bill+=70;
    printf("ice-tea %d",bill;
    break;
    case 3:
    bill+=80;
    printf("non-veg %d",bill);
    break;
    case 4:
    bill+=50;
    printf("coffe %d",bill);
    break;
    case 5:
    bill+=10;
    printf("cold-drink %d",bill);
    break;
    default:printf("not valid");
    }
    getch();

}
