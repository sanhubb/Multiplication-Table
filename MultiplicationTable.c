#include <stdio.h>

int main() {
    int i, j;
    int table = 10;
    int max = 12;
  
    for (i = 1; i <= table; i++) {
        for (j=1; j <= max; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n"); /* blank line between tables */
    }
    
    return 0;
}
