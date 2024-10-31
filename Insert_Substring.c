#include<stdio.h>
#include<string.h>
#include <stdlib.h>
void insertsubstring(char*mainstr, char*substr, int pos)
{
    char result[100];
    strncpy(result,mainstr,pos);
    result[pos]='\0';
    strcat(result,substr);
    strcat(result, mainstr+pos);
    printf("String after insertion %s\n", result);
}
int main()
{
    char mainstr[100], substr[100]; 
    int pos;
    printf("enter the main string:");
    gets(mainstr);
    printf("enter the substring:");
    gets(substr);
    printf("enter the postion:");
    scanf("%d", &pos);
    insertsubstring(mainstr,substr,pos);
    return 0;   
}