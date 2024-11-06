#include<stdio.h>
#include<string.h>
#include <stdlib.h>
void countwordsandchars(char*str)
{
int i; int wordcount=0; int charcount=0;
for(i=0; str[i]!='\0';i++)
{
    if (str[i]!=' ')
    {
        charcount++;
    }
    
    if(str[i]==' '|| str[i+1]=='\0')
    {
        wordcount++;
    }
}
    printf("WORDS:%d, Characters:%d\n", wordcount,charcount);
}
int main()
{
char str[100];
printf("Enter the string:");
gets(str);
countwordsandchars(str);
return 0;   
}