#include<stdio.h>
#include<conio.h>
#include<conio.h>
main()
{
    int j,e,c,k,y;
   float   Total,sum;
    clrscr();

    printf("Enter Your Maths Mark :");
    scanf("%d",&j);
    printf("Enter Your English Mark :");
    scanf("%d",&e);
    printf("Enter Your Scince Mark :");
    scanf("%d",&c);
    printf("Enter Your Gujarati Mark :");
    scanf("%d",&k);
    printf("Enter Your computer Mark :");
    scanf("%d",&y);
       printf("Total sum :\n",sum);
    sum=(j+e+c+k+y);

    Total = (sum/500.)*100;
    printf("Total=%.2f",Total);
    printf("\n\n");
    if(Total>=91 && Total<=100)
    {
      printf("GRADE : A+");

    }
    else if (Total>=81 && Total<=90)
    {
     printf("GRADE :A");
     }
     else if (Total>=71 && Total<=80)
   {
     printf("GRADE :B+");
     }
      else if (Total>=61 && Total<=70)
    {
     printf("GRADE :B");
    }
      else if (Total>=51 && Total<=60)
    {
     printf("GRADE :C+");
    }
      else if (Total>=41 && Total<=50)
    {
     printf("GRADE :C");
    }
      else if (Total>=33 && Total<=40)
    {
     printf("GRADE :D");

    }
    else
    {
      printf("You are fail...");
    }
    getch();
   }















