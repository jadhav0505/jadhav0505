#include<stdio.h>
#include<conio.h>
void main()
{
  int m1,m2,m3,m4,m5,total;
  float per;
  clrscr();
  printf("\n Enter the five subject marks:");
  scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
  total=m1+m2+m3+m4+m5;
         per=total/5;
         printf("\n total=%d",total);
         printf("\n percentage =%f",per);
         if(per>=75 && per<=100)
         {
           printf("\n Dist");
         }
         else if(per>=65 && per<=75)
         {
           printf("\n Grade A");
         }
         else if (per>=55 && per<=65)
         {
           printf("\n Grade B");
         }
         else if(per>=45 && per<=55)
         {
           printf("\n Grade C");
         }
         else if(per>=35&& per <=45);
         {
           printf("\n Pass ");
         }
         else
         {
           printf("\n Fail");
         }
         getch();
         }
