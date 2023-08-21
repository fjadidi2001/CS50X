#include <stdio.h>
int main()
{
    int array1[25];
    float array2[5] = {3.2, 6.25, 7.1, 8.3, 1.0258};
    int array3[5] = {3, 5,1}; //Missing values are set to 0.
    printf("The second element is %4.2f\n", array2[4]);
    array2[1] = 4.125;
    printf("The element change to new number %d\n", array2[1]);
    

}