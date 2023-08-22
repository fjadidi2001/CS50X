#include <stdio.h>

int main() {
    int a[2][3] = {
        {3, 2, 6},
        {4, 5, 20}
    };
    
    int k, j;
    /* display array contents */
    for (k = 0; k < 2; k++) { //row
        for (j = 0; j < 3; j++) { //column
            printf(" %d", a[k][j]);
        }
        printf("\n");
    }
   
	return 0;
}