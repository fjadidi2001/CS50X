#include <stdio.h>
int main(){
    int count = 10;
    while (count < 20)
    {

        /* code */
        if (count == 10)
            break;
        if (count == 15)
            continue;


        
        printf("%d", count);
        count--;

    }
    
}