#include <stdio.h>

void test(int k);

int main() {
    int i = 0;
    
    printf("The address of i is %x\n", &i); //%x is the hex format specifier
    test(i);
    printf("The address of i is %x\n", &i);
    test(i);

    return 0;
}

void test(int k) {
    printf("The address of k is %x\n", &k);
} 