#include<stdio.h>
#include<conio.h>
void main()
{
    int number,sum=0,digit;
    printf("enter the number:");
    scanf("%d",&number);
    while (number!=0)
    {
        digit=number%10;
        sum=sum+digit;
        number=number/10;
    }
    printf("sum of digit is %d:",sum);
    return 0;
    
}