#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Way-2-long!!\n");
    printf("how many words?\n");
    scanf("%d", &num);

    //printf("%d", length);
    while (num--){
    char word[100];
    printf("-----\n");
    printf("Input the word\n");
    scanf("%s", word);
    int length = strlen(word);

    printf("Output:\n");
    if(length > 10){
        printf("%c%d%c\n", word[0], length-2, word[length-1]);
    } else {
        printf("%s\n", word);
    }
    }
    return 0;
}
