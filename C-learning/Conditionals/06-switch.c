#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    switch (num){
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        default:
            printf("Not 1,2,3\n");


    }
}