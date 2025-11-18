#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Team\n");

    /*You are given n problems. For each problem, 3 friends (Petya, Vasya, Tonya)
    think if they know the solution: Each friend writes 1 if sure - Or 0 if not sure. If at least 2 out of 3
    say "I'm sure", then the team will solve that problem. Count how many problems they will solve.*/

    int num;
    printf("How many problems?\n");
    scanf("%d", &num);

    int a, b, c;
    int count = 0;
    for(int i = 0; i < num; i++){
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c == 2 || a + b + c == 3){
            count++;
        }
    }
    printf("Problems solved:\n");
    printf("%d", count);
    return 0;
}
