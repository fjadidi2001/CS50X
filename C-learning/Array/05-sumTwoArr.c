#include <stdio.h>
int main()
{
    int arr[1][1] = {
        {1, 2},
        {3, 4}
    };
    int sum = 0;
    int i,j;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            sum += arr[i][j];

        }


    }
    printf("Sum: %d\n", sum);


}