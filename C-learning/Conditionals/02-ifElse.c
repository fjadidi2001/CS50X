#include <stdio.h>
int main()
{

    char name[20];
    gets(name);
    if (name == "   ")
    {
        printf("%s is string", name);
    }
    else
    {
        printf("%s is another datatype", name);
    }
}  
