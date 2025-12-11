#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//https://codeforces.com/problemset/problem/112/A

int main()
{
    char str1[100];
    char str2[100];

    printf("Input two strings\n");

    //accept two strings
    scanf("%s", str1);
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)){
        printf("Invalid Input\n");
        return 0;
    }

    //convert to lower/upper
    for (int i = 0; i < strlen(str1); i++){
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }

    //compare & print
    int result = strcmp(str1, str2);

    if(result > 0){
        printf("%d\n", 1);
    } else if (result < 0){
        printf("%d\n", -1);
    } else {
        printf("%d\n", 0);
    }

    return 0;
}
