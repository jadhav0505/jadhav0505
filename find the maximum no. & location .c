#include<stdio.h>
#include<conio.h>
void main(()
          {
            int a[i],max=0,i,l;
            clrscr();
            printf("\n Enter elements of a :");
            for(i=0;i<5;i++)
            {
              scanf("%d",&a[i]);
            }
            for(i=0;i<5;i++)
            {
              if(a[i]>max)
              {
                max=a[i];
                l=i;
              }
            }
            printf("\n max no in array=%d",max);
            printf("\m location of max no in array =%d",l);
            getch();
          }
          
