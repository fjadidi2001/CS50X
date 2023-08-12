#include <stdio.h>
int main()
{
    char f[100];
    //A string is stored in a char array.


    gets(f);

    printf("your entered: %s", f);
    return 0;
}