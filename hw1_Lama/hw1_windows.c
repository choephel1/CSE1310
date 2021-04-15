/*Tsering Choephel
This program calculates area and cost of windows given size and count.*/
#include <stdio.h>
int main(){
    float width1, height1, num1, area, total;       // Introducing float variable.
    printf("Enter window width(in feet): ");
    scanf("%f",&width1);                            // Taking width of windows from user and assigning to float variable.
    printf("Enter window height(in feet): ");
    scanf("%f",&height1);                           // Taking height of windows and assigning to float variable.
    printf("Enter number of windows: ");
    scanf("%f",&num1);                              // Taking number of windows from user and assigning to float variable.
    area = width1 * height1 * num1 ;                // Calculating the area of the windows.
    total = area * 50;                              // Calculating the total price of the windows.
    printf("Your total is: $ %.2f, for %.2f sq ft", total,area); // Displaying the total cost and the area of the windows.
    return 0;
}
