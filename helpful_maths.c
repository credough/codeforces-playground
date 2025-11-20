#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Helpful Maths\n");
    /*You are given a string like: 3+2+1. Your job is to sort the numbers and print them back
    with + sign.
    Example:
    Input: 3+2+1
    Output: 1+2+3

    Input: 1+1+3+1+3
    Output: 1+1+1+3+3*/

    char word[100];
    printf("Please input here:\n");
    scanf("%s", word);
    int counter = 0;
    int nums[100];

    //extract
    for (int i = 0; word[i] != '\0'; i++){
        if (word[i] != '+'){
            nums[counter++] = word[i] - '0';
        }
    }

//bubble sort
    for(int i = 0; i < counter; i++){
        for(int j = 0; j < counter; j++){
            if (nums[i] < nums[j]){
                int temp;
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    printf("Output:\n");

     //printing
    for (int i = 0; i < counter; i++){
            printf("%d", nums[i]);
            if (i != counter - 1){
                printf("+");
            }
    }



    return 0;
}
