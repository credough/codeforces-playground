#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Cupboards!\n");

    int n;
    printf("No. of cupboards\n");
    scanf("%d", &n);

    int li, ri;
    int closed_right = 0;
    int opened_right = 0;
    int closed_left = 0;
    int opened_left = 0;
    int min_left = 0;
    int min_right = 0;

    printf("Open - 1, Closed - 0\n");
    for (int i = 0; i < n; i++){
        scanf("%d %d", &li, &ri);

        if (ri == 0){
            closed_right++;
        } else {
            opened_right++;
        }

        if (li == 0){
            closed_left++;
        } else {
            opened_left++;
        }

        if (opened_right > closed_right){
            min_right = closed_right;
        } else {
            min_right = opened_right;
        }

        if (opened_left > closed_left){
            min_left = closed_left;
        } else {
            min_left = opened_left;
        }
    }

    printf("%d", min_left + min_right);

    return 0;
}
