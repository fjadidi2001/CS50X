#include <stdio.h>

int main() {
    int x;
    float num;
    char text[20];
    scanf("%d %f %s", &x, &num, text);
    //The & isn't needed for a string because a string name acts as a pointer.
    printf("%d %f %s", x, num, text);
    
}