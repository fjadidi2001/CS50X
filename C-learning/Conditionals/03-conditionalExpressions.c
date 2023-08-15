#include <stdio.h>
int main()
{
    int x;
    //get x
    scanf("%d",&x);
    // if x grater than 5 put y=8 else declare x to y
    int y = (x >= 5) ? 8 : x ;
    printf("%d %d", x, y);
}