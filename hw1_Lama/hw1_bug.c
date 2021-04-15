/*Tsering Choephel
This program reads from the user the number of side and prints them back.*/
#include <stdio.h>
int main(void){
    int sides;
    printf("How many sides does your polygon have? ");
    scanf("%d", &sides); // assigning the value in int variable.
    printf("Your answer was: %d", sides); // displaying output.
    return 0;
}
