#include <stdio.h>
int main()
{
    char str3[7] = {'f', 'a','t','e','m','e','\0'};
    char str4[ ] = {'j','a', 'd', 'i', 'd', 'i', '\0'};
    printf("%s %s",str3, str4);
}

/*
With this approach, the NULL character must be added explicitly.
Note that the characters are enclosed in single quotation marks.


*/