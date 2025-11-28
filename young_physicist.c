#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Young Physicist\n");
    //problem link: https://codeforces.com/problemset/problem/69/A

    int c;
    printf("How many coordinates?\n");
    scanf("%d", &c);
    int num[c][3];
    int sum_1 = 0;
    int sum_2 = 0;
    int sum_3 = 0;

   for(int i = 0; i < c; i++){
    scanf("%d %d %d", &num[i][0], &num[i][1], &num[i][2]);
   }

   for(int i = 0; i < c; i++){
    sum_1 += num[i][0];
    sum_2 += num[i][1];
    sum_3 += num[i][2];
    }

    if(sum_1 == 0 && sum_2 == 0 && sum_3 == 0){
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
