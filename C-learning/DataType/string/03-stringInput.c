#include <stdio.h>

int main() {
    char first_name[25];
    int age;
    printf("Enter your first name and age: \n");
    scanf("%s %d", first_name, &age);
    
    printf("\nHi, %s. Your age is %d", first_name, age);
    
    return 0;
}