#include <stdio.h>

int main() {
    printf("Color: %s, Number: %d, float: %5.2f \n", "red", 42, 3.14159);
    /* Color: red, Number: 42, float:  3.14  */

    printf("Pi = %10.2f \n", 3.14159); 
    /* Pi =       3.14 */
    // دقت کن خروجی از مساوی ده تا فاصله داره در نتیجه اون ده برای اینه
    
    printf("Pi = %8.5f \n", 3.14159); 
    /* Pi =   3.14159 */
     
    printf("Pi = %-8.5f \n", 3.14159); 
    /* Pi = 3.14159 */
    
    printf("There are %d %s in the tree. \n", 22, "apples");
    /* There are 22 apples in the tree. */
}