#include <stdio.h>
int main(){
    int count = 15;
    while (count > 0)
    {

        /* code */
        if (count == 10 && count == 1)
            break;
        if (count == 5)
            continue;


        
        printf("%d\n", count);
        count--;

    }
    
}