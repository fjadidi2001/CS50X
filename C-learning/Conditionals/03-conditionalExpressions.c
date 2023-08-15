#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int y = (x >= 5) ? 8 : x ;
    printf("%d %d", x, y);
}