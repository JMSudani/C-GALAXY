#include<stdio.h>
#include<conio.h>

main()
{
    int a,b;
    clrscr();
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    if(a<b)
    {
      printf("%d is a minimum number",a);

    }
    else
    {
      printf("%d is a  minimum number",b);

    }

    getch();

}





