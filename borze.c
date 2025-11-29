#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//problem link: https://codeforces.com/problemset/problem/32/B

int main()
{
    printf("Borze\n");

    char borze[200];
    int run = 0;
    scanf("%s", borze);
    int length = strlen(borze);

    for(int i = 0; i < length;){
            if(borze[i] == '.'){
                printf("0");
                i++;
            } else if (borze[i] == '-'){
                if(borze[i + 1] == '.')  {
                    printf("1");
                } else if (borze[i + 1] == '-'){
                    printf("2");
                }
            i+=2;
        }
}
    return 0;
}

