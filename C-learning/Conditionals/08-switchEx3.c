/*
Fill in the blanks to test the num variable against the value 3, 5, and 42 and print the corresponding texts to the screen.

*/

#include <stdio.h>
int main(){
    int num = 42 ;
    switch (num)
    {
    case 3:
        printf("a prime number.\n");
        break;
    case 5:
        printf("another prime number.\n");
        break;
    case 42:
        printf("the life\n");
        break;
    }
}