#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arrival of the general\n");

    int num;


    printf("No. of Soldiers:\n");
    scanf("%d", &num);

    int h[num];

    printf("Heights of the soldiers:\n");
    for(int i = 0; i < num; i++){
        scanf("%d", &h[i]);
    }

    int max = 0;
    int min = 0;
    for(int i = 0; i < num; i++){
        if(h[i] > h[max]){
            max = i;
        }
    }

    for(int i = num-1; i >= 0; i--){
        if(h[i] < h[min]){
            min = i;
        }
    }

    int swaps;

    swaps = max + (num-1 - min);

    if(max > min){
        swaps--;
    }

    printf("%d\n", swaps);


    return 0;
}
