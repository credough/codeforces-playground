#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bear and Big Brother\n");

      /*You are given two integers: a = Limak's weight and b = Bob's weight. Each year,
      Limak's weight becomes 3 x a and Bob's weight becomes 2 x b. You must find how many years
      until Limak becomes strictly heavier than Bob.
      Example:
      Input: 4 7
      Output: 2 */

    int a, b;
    int years;
    printf("Input the weight of Limak and Bob\n");
    scanf("%d %d", &a, &b);

    while(a <= b){
        a = a*3;
        b = b*2;
        years++;
    }
    printf("Years:\n");
    printf("%d", years);

    return 0;
}
