#include <stdio.h>
int main()
{
    int arr[5] = {1, 45, 20, 7, 0};
    int *ptr = NULL;
    int i;
    ptr = arr;
    for (i = 0; i < 5; i++){
        printf("%d", *(ptr + i));
    }
}