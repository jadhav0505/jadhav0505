
 #include<stdio.h>
 #include<string.h>
int check_vowel(char);
int main()
{
    char s[100],t[100];
    int i,j=0,count=0;
    printf("\n Enter a string to delete vowels \n");
    gets(s);
    for(i=0;s[i]!="";i++)
    {
        if(check_vowel(s[i])==1)
        {
        count++;
        }
    }
    printf("\n no of vowels :%d\n ",count);
    return 0;

}
int check_vowel(char c)
{
    switch(c)
    {
        case'a':
        case 'A':
        case'e':
        case'E':
        case'i':
        case'I':
        case'o':
        case'O':
        case'u':
        case'U':
        return 1;
        default:
        return 0;
    

    }
}
