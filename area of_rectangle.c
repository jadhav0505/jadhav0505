#include<stdio.h>
int main()
{
    int area;
    int calarea();
    area=calarea();
    printf("\n area of rectangle is %d",area);
    return 0;
}
int calarea()
{
    int l,b,ans;
    printf("\nEnter the length:");
    scanf("%d",&l);
    printf("\n Enter the breadth:");
    scanf("%d",&b);
    ans=l*b;
    return ans;

}
