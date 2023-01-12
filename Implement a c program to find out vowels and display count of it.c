#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,len,v=0;
    printf("\nEnter the string:");
    scanf("%s",&a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]=='a'|| a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
        v=v+1;
    }
    printf("\n total vowels in the string:%d",v);
}
