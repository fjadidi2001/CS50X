#include <stdio.h>

int main() {
    char first_name[25];
    int age;
    printf("Enter your first name and age: \n");
    scanf("%s %d", first_name, &age);
    /*
    there is no need for & to access the variable address because an array name acts as a pointer.
    */
    printf("\nHi, %s. Your age is %d", first_name, age);
    
    return 0;
}