#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n = 4;
    for (int baris = 1; baris <= n; baris++){
        for (int kolom = 1; kolom <= baris; kolom++)
            printf("*");
        printf("\n");
    }
     n = 3;
    for (int baris = 1; baris <= n; baris++){
        for (int kolom = 1; kolom <= baris; kolom++)
            printf("*");
        printf("\n");
    }
    n = 2;
    for (int baris = 1; baris <= n; baris++){
        for (int kolom = 1; kolom <= baris; kolom++)
            printf("*");
        printf("\n");
    }
    return 0;
}

