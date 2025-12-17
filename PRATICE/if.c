#include<stdio.h>
#include<conio.h>
void main()
{
    int mark;
    printf("enter the value of mark:");
    scanf("%d",&mark);
    if(mark<=90)
    {
        printf("1st");
    }
    else if (mark<=80)
    {
        printf("2nd");
    }
    else if (mark<=70)
    {
        printf("3nd");
    }
    else if (mark<=60)
    {
        printf("4nd");
    }
    else{
        printf("not good");
    }
    getch();
    

}