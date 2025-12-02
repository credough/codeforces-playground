#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; //no. of friends
    int k; //bottles of a soft drink
    int l; //ml per bottle
    int c; //no. of limes
    int d; //no. of slices
    int p; //grams of salt
    int nl; //ml of the drink to make a toast
    int np; //grams of salt to make a toast

    printf("Soft Drinking\n");
    scanf("%d %d %d %d %d %d %d %d", &n,&k,&l,&c,&d,&p,&nl,&np);

    int total_drinks = k * l;
    int total_slices = c * d;
    int total_salt = p;

    int toast_in_drink = total_drinks / nl;
    int toast_in_limes = total_slices;
    int toast_in_salt = total_salt / np;

    //look for limiting ingredient (maximum no. of toast)
    int total_toast = toast_in_drink;
    if(total_toast > toast_in_limes) total_toast = toast_in_limes;
    if(total_toast > toast_in_salt) total_toast = toast_in_salt;

    printf("%d", total_toast / n);

    return 0;
}
