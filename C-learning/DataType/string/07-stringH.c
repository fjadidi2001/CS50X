#include <stdio.h>
#include <string.h>
int main()
{
    char str1[ ] = "FAtemE Must Be die!!";
    char str2[ ] = "But Not TodaY!";
    strcat(str1,str2);
    printf("len str1: %d", strlen(str1));
    strcpy(str1,str2);
    printf("str1 is now %s \n", str1);
    return 0;



}