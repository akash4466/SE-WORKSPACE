#include<stdio.h>
#include<conio.h>
void main()
{

    int marks;
    printf("enter the marks");
    scanf("%d",&marks);

    if(marks<=50)
    {
        printf("need more improvment");
    }
    else if(marks<=70)
    {
        printf("good");
    }
    else if(marks<=80);
    {
        printf("excellent");
    }
    
}