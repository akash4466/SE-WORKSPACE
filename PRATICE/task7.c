#include<stdio.h>
#include<conio.h>
void main()
{
    int math,sci,phy,che;
    
    printf("enter the value of math:50/");
    scanf("%d",&math);
    printf("enter the value of sci:50/");
    scanf("%d",&sci);
    printf("enter the value of phy:50/");
    scanf("%d",&phy);
    printf("enter the value of che:50/");
    scanf("%d",&che);


    int total=math+sci+phy+che;
    printf("\n 200
    int answer %d",total);
    int per= total/200*100;
    printf("percentahe is %d",per);

    getch();

}