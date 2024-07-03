#include <stdio.h>
# include <conio.h>

main()
{    char GRADE;
     int a;
    clrscr();
    printf("Enter Your Total Marks :",a);
    scanf("%d",&a);
   if (a>=91 && a<=100)
     {
      GRADE ='A';

     }
		    else if (a>=81 && a<=90)
			{
			  GRADE ='B';

			}

				    else if (a>=71 && a<=80)
				    {
				      GRADE ='C';
				    }
						     else if (a>=61 && a<=70)
						     {
						       GRADE='D';
						     }
								 else if(a>=33 && a<=60)
								     {

									GRADE='E';
								     }
								      else
								      {
									GRADE='F';
								      }

     switch (GRADE)
     {
     case 'A':
     case 'a': printf("your grade is a \n Exellent Work!");
     break;
      case 'B':
     case 'b': printf("your grade is b \n Well Done!");
     break;
      case 'C':
     case 'c': printf("your grade is c \n Good Job!");
     break;
      case 'D':
     case 'd': printf("your grade is d \n you are pass!");
     break;
      case 'E':
     case 'e': printf("your grade is e \n good!");
     break;
      case 'F':
     case 'f': printf("your grade is f \n sorry, you faild!");
     break;
     }
     if(GRADE=='A' || GRADE=='B' || GRADE=='C' || GRADE=='D' || GRADE=='E')
     {
	 printf("\nyou are eligible for the next level");
     }
     else
     {
       printf("\nsorry, you are fail \n better luck next time");
     }
    getch();



}





