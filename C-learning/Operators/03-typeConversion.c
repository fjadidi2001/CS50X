# include <stdio.h>
int main()
{
    int num1;
    float num2;
    float result;
    scanf("%d %f", &num1, &num2);
    result = num1 * num2;
    printf("The result is %.5f", result);
    return 0;

}