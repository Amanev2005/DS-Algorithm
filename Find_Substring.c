#include<stdio.h>
#include<string.h>
#include <stdlib.h>
void findsubstring(char*mainstr, char*substr)
{
char *pos=strstr(mainstr,substr);
if(pos!= NULL)
{
    printf("substring found at the postion %d\n",pos-mainstr);

}
else
{
    printf("Substring not found\n");
}
   
}
int main()
{
char mainstr[100],substr[100];
printf("Enter the mainstring:");
gets(mainstr);
printf("Enter the substring:");
gets(substr);
findsubstring(mainstr,substr);
return 0;   
}