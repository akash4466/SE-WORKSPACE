#include<stdio.h>
#include<conio.h>
int main()
{
    int n,fact=1;
    printf("enter the n value:");
    scanf("%d",&n);
    for ( int i=1; i<=n; i++)
    {
        fact=fact*i;

    }
    printf("factriol %d",fact);
    return 0;
    
}