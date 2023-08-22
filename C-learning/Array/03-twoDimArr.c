#include <stdio.h>
int main()
{
    int a[2][3];
    int b[4][2] = {
        {3, 1},
        {1, 8},
        {2, 4},
        {5 ,15}
    };
    int c[2][3] = { {3, 2, 6}, {4, 5, 20} }; 
    printf("Element 2 in row 4 is %d\n", b[3][1]);

    printf("Element 3 in row 2 is %d\n", c[1][2]); /* 20 */
    c[1][2] = 25;
    printf("Element 3 in row 2 is %d\n", c[1][2]); /* 25 */
}