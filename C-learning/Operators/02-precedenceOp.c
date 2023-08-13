# include <stdio.h>

int main()
{
    int a = 14, b = 45, c = 15;
    int result;
    result = a - b + c;  // 4
    printf("%d \n", result);
    result = a + b / c;  // 8
    printf("%d \n", result);
    result = (a + b) / c;  // 5
    printf("%d \n", result);

    return 0;


}
