#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*You are given a username (a string). Count how many distinct characters are in the string. If the number
    of distinct characters is even, print "CHAT WITH HER!". If the number of distinct characters is odd, print
    "IGNORE HIM!".*/

    int count = 0;
    char word[100];

    printf("Please input the name below:\n");

    scanf("%s", word);

    for(int i = 0; word[i] != '\0'; i++){
        count++;
    }

    if(count % 2 == 0){
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }
    return 0;
}
