#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b;
    printf("enter the vale of a");
    scanf("%f",&a);
    printf("enter the value of b");
    scanf("%f",&b);

    float add=a+b;
    float sub=a-b;
    float mul=a*b;
    float div=a/b;
    
    printf("\n answer is %f",add);
    printf("\n answer is %f",sub);
    printf("\n answer is %f",mul);
    printf("\n answer is %f",div);
    
    getch();



    
}