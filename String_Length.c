#include<stdio.h>
int strlength(char*string)
{
    int length=0;
    while(*string !='\0')
    {
        length++;
        string++;
    }
    return length;
}
void main()
{
    char string[10];
    printf("Enter the string\n");
    scanf("%s", string);
    printf("Length of the string =%d",strlength(string));
}