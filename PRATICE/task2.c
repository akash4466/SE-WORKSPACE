#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    


    printf("enteer the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);

    int add=a+b;
    int sub=a-b;
    int mul=a*b;
    int div=a/b;

    printf("\n answer is:%d",add);
    printf("\n answer is:%d",sub);
    printf("\n answer is:%d",mul);

    getch();
}