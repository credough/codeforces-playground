#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    char word[200];
    scanf("%s", word);

    word[0] = toupper(word[0]);

    printf("%s", word);
    return 0;
}
