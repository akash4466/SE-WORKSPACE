#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
     
    
    printf("enter your order:");
    scanf("%d",&a);

    switch (a)
    {
        case 1:
        printf("\n pizza");
        break;
        case 2:
        printf("\n pani-puri");
        break;
        case 3:
        printf("\n ice-cream");
        break;
        default:printf("not-avalable");
        if (a==1)
        {
            printf("\n bills is 10$");
        }
        if (a==2)
        {
            printf("\n bills is 20$");
        }

        if (a==3)
        {
            printf("\n bills is 30$");
        }


        


        


        

    
    
    }
    getch();

    

    


}