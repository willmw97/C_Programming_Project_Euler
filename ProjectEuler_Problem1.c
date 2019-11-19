#include <stdio.h>
#include <stdlib.h>



int main() {
    int total = 0;
    for ( int i = 0; i < 1000; i++ ) {
        if ( i % 3 == 0 || i % 5 == 0 ) {
            printf( " %i ", i );
            total = total + i;
        }
    }
    printf( "\nTotal: %i\n", total );
    return 0;
}
