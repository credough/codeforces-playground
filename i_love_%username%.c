#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("i_love_%username%!\n");

    int n;

    printf("No. of scores\n");
    scanf("%d", &n);

    int scores[100];
    int amazing = 0;

    for(int i = 0; i < n; i++){
    	scanf("%d", &scores[i]);
    }

    int min = scores[0];
    int max = scores[0];

    for(int i = 0; i < n; i++){
    	if(min > scores[i]){
    		amazing += 1;
    		min = scores[i];
    	} else if (max < scores[i]){
    		amazing += 1;
    		max = scores[i];
    	}

    }

    printf("%d\n", amazing);

    return 0;
}
