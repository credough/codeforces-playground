#include <stdio.h>
#include <stdlib.h>
//https://codeforces.com/problemset/problem/271/A

int main()
{
    printf("Beautiful Year!\n");
    int year;
    printf("Please input the year:\n");
    scanf("%d", &year);

    while(1){
        int a,b,c,d;
        year++;

        a = year/1000;
        b = (year/100)%10;
        c = (year/10)%10;
        d = year%10;

        if(a != b && a != c && a != d && b != c && b != d && c != d){
            printf("Result:\n");
            printf("%d", year);
            break;
        }
    }
    return 0;
}
