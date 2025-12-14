#include<stdio.h>
#include<conio.h>
void main()
{
    int p,r,n,total;

    printf("enter value of p:");
    scanf("%d",&p);
    printf("enter value of r:");
    scanf("%d",&r);
    printf("enter value of n:");
    scanf("%d",&n);

    int sim=p*r*n/100;
    int tot=sim+p;

    printf("answer %d",sim);
    printf("toatl payment:%d",tot);
    getch();


}