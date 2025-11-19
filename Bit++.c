#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Bit++\n");

    /*You are given n operations. Each operation is either "X++", "++X", "X--", "--X". If this operation
    has "++", increase X by 1. If it has--, you decrease X by 1. X starts at 0. After reading all
    operations, print the final value of x*/

    int num;
    char op [10];

    printf("How many operations?\n");
    scanf("%d", &num);
    int x = 0;

    while (num--){
        scanf("%s", op);

    if(strstr(op, "++")){
        x++;
    } else{
        x--;
    }
    }
    printf("Value: %d\n", x);
    return 0;
}
