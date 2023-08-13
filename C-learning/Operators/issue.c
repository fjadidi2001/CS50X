#include <stdio.h>
int main()
{
    int x = 8;
    int y = 7;
    x++;
    x+=y--;
    printf("%d", x);
// why output is 16?
}