#include <stdio.h>

int main() {
    int count = 1;
  
    do {
        printf("Count = %d\n", count);
        count++;
    } while (count < 0);
    
    return 0;
} 