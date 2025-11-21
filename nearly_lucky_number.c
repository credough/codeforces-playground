#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Nearly Lucky Number\n");

    /*You are given a number n (it can be long, so read as a string). Count how many digits of n
    are 4 or 7.
    If the count itself is 4 or 7, then print "Yes". Otherwise, print "No".
    Example:
    Input: 4 0 0 4 7
    Output: No*/

    char inp[100];
    int count;

    printf("Input:\n");
    scanf("%s", &inp);

    for (int i = 0; inp[i] != '\0'; i++){
        if(inp[i] == '4' || inp[i] == '7'){
            count++;
        }
    }
    printf("\n");

    printf("Output:\n");
    if(count == 4 || count == 7){
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
