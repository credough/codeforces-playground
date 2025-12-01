#include <stdio.h>
#include <stdlib.h>
// https://codeforces.com/problemset/problem/275/A
int main()
{
    printf("Lights out!\n");

    int clicks[3][3];
    int result[3][3];

    //gets the user input
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &clicks[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            //total number of clicks
            int sum = clicks[i][j];

            //checks affected surroundings
            if(i > 0){//may up ba?
                sum+=clicks[i-1][j];
            }
            if(i < 2){//may down? if oo, add
                sum+=clicks[i+1][j];
            }
            if(j > 0){//may left? if oo, add
                sum+=clicks[i][j-1];
            }
            if(j < 2){// may right? if oo, add
                sum+=clicks[i][j+1];
            }

            //open or off?
            if(sum % 2 == 0){
                result[i][j] = 1; // ON
            } else {
                result[i][j] = 0; // OFF
            }
        }
    }

    //print the result
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
