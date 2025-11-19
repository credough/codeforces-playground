#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Domino Piling!\n");
    /*You are given a board of size: M rows, N columns. You want to fill it with with 1x2 dominoes.
    Each domino covers 2 squares. Find how many dominoes you can place on the board without overlapping and
    without cutting any domino. Each domino covers 2 cells.*/

    int M, N;
    printf("M:\n");
    scanf("%d", &M);
    printf("N:\n");
    scanf("%d", &N);

    int num = (M * N)/2;
    printf("\n");
    printf("The maximum number of dominoes: %d", num);
    printf("\n");

    return 0;
}
