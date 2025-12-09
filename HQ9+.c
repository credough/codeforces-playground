#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//https://codeforces.com/problemset/problem/133/A

int main()
{
    char word[100];
    printf("Input a string\n");
    scanf("%s", word);

    int length = strlen(word);
    int value = 0;

    for(int i = 0; i < length; i++){
        if(word[i] == 'H' || word[i] == 'Q' || word[i] == '9'){
            value = 1;
        } else {
            value = 0;
        }
    }

    if(value == 1){
        printf("YES\n");
    } else if (value == 0){
        printf("NO\n");

    }
    return 0;
}
