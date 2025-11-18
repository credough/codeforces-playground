#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w = 0;
    printf("Input the weight of the watermelon\n");
    scanf("%d", &w);

    printf("ANSWER\n");

    if (w % 2 == 0 && w > 2){
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
