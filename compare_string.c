#include<stdio.h>
int main()
{
    char a[100],b[100];
    printf("\n Enter the string:");
    scanf("%s",&a);
    printf("\nEnter the string:");
    scanf("%s",&b);
    if(strcmp(a,b)==0)
    {
        printf("\n the string are equal");
    }
    else{
        printf("\n the string are not equal");
    }
}
