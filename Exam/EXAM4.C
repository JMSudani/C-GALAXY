#include<stdio.h>
#include<conio.h>

main()
{
    int x=10,y=20;
    clrscr();
    printf("Befor swaping :\n");
    printf(" x=10 \n y=20");
    printf("\n\n");
    printf("After swaping :\n");
    x=x*y;
    y=x/y;
    x=x/y;
    printf("x= %i\n",x);
    printf("y= %d",y);
    getch();
}





