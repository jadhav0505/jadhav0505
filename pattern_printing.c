include<stdio.h>
int main()
{
    int i,j,k,m=5;
    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(k=0;k<m;k++)
        {
            printf("*");
        }
        m--;
        printf("\n");
    }
    return 0;
}
