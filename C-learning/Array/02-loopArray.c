#include <stdio.h>
int main()
{
    float purchases[3] = {10.99, 14.25, 90.50};
    float total = 0;
    int k;

/* total the purchases */
    for (k = 0; k < 3; k++) {
    total += purchases[k];
}
   
printf("Purchases total is %6.2f\n", total);
/* Output:  Purchases total is 115.74 */
}