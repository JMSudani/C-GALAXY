#include<stdio.h>
#include<conio.h>

main()
{
    float a=0.5;
    float b,h;
   clrscr();

   printf("Enter the value of b");
   scanf("%f",&b);
   printf("Enter the value of h");
   scanf("%f",&h);
   printf("%f*%f*%f=%f",a,b,h,a*b*h);
   getch();


}