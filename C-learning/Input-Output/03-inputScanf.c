#include <stdio.h>
int main()
{
    int g;
    scanf("%d", &g);
    //& is the address operator. It gives the address, or location in memory, of a variable. This is needed because scanf places an input value at a variable address
    printf("%d", g);
    return 0;
}