#include<stdio.h>
#include<conio.h>
int main()
{
    int num,idigit=0,ldigit=0;
    printf("enter any number:");
    scanf("%d",&num);

    idigit=num%10;
    while (num>0)
    {
        if (num>9)
        {
            num=num/10;
        }
        else
        {
            idigit=num;
            num=num/10;
        }
        
    }
    int ans=idigit+ldigit;
    printf("sum %d",ans);
    return 0;
    



}