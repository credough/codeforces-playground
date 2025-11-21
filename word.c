#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    printf("Hello Word!\n");

    /*You are given a word (string). Count how many uppercase letter it has. Count how many
    lowercase letters it has. If uppercase letters > lowercase, convert the whole word to UPPERCASE.
    Otherwise, convert the whole word to lowercase.*/

    char word[100];
    int upper = 0, lower = 0;
    printf("Please input the word below\n");
    scanf("%s", &word);

    //counter
    for (int i = 0; word[i] != '\0'; i++){
        if(isupper(word[i])){
            upper++;
        } else {
            lower++;
        }
    }

    printf("\n");

    //compare, capitalize, print
    if(upper > lower){
            for(int i = 0; word[i] !=  '\0'; i++){
        word[i] = toupper(word[i]);
        }
    printf("UPPERCASE:\n");
     printf("%s", word);

    } else {
        for(int i = 0; word[i] != '\0'; i++){
       word[i] = tolower(word[i]);
       }
    printf("LOWERCASE:\n");
      printf("%s", word);

    }



    return 0;
}
