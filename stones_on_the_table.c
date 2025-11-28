#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Stones on the table\n");
    //problem link: https://codeforces.com/problemset/problem/266/A

    int n = 0;
    printf("How many characters?\n");
    scanf("%d", &n);

    char stones[100];

    printf("Input the stones:\n");
    scanf("%s", stones);

    int to_remove;

    for(int i = 0; i < n; i++){
        if(stones[i] == stones[i + 1]){
            to_remove++;
        }
    }

    printf("Stones to be removed:\n");
    printf("%d", to_remove);

    return 0;
}
