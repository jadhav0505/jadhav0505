#include<stdio.h>
#include<conio.h>
void main()
{
  int a[2][2],b[2][2],c[2][2],i,j;
  clrscr();
  printf("\n Enter the elements of array a=");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n Enter the elements of array b=");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  printf("\n The matrix a is :\n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("%d \t",a[i][j]);
    }
    printf("\n");
  }
  printf("\n The matrix b is :\n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("%d \t",b[i][j]);
    }
    printf("\n");
  }
  printf("\n The addition is :\n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      c[i][j]=a[i][j]+b[i][j];
      printf("%d \t",c[i][j]);
    }
    printf("\n");
  }
  getch();
}
  
  
  
  
  
