#include<stdio.h>
#include<conio.h>

main()
{
    int a,b,c;
    clrscr();
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    if(a==b|| a==c|| b==c)
    { printf("Both are equal...");

    }
    else
    {
       if(a>b)
     {
       if(a>c)
       {
	  printf("%d is maximum",a);
	  }
     else
     {  printf("%d is maximum",c);
     }

    }
    else
    {
       if(b>c)
       {
	  printf("%d is maximum");
	 }
     else
     { printf("%d is maximum",c);

     }
   }
    }

    getch();
}





