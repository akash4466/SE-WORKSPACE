#include<stdio.h>
#include<conio.h>
void main()
{   
    int table_no,bill,choice;
    printf("enter your table no:");
    scanf("%d",&table_no);
    
    while(true)
    {
        switch (choice)
        {
        case 1:bill+=100;
        printf("total amount is %d",bill);
        break;
        case 2:bill+=200;
        printf("total amount is %d",bill);
        break;
        case 3:bill+=300;
        printf("total amount is %d",bill);
        break;
        case 4:bill+=400;
        printf("total amount is %d",bill);
        break;
        default:printf("not vaild");

        }
    }
    
    getch();
    
}