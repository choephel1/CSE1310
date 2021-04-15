/*Tsering Choephel
This program is to measure the time to arrive to destination.*/
#include <stdio.h>
int main(){
    float dist1, speed1, time1;                 // Introducing float variables.
    printf("Enter the distance (miles): \n");
    scanf("%f",&dist1);                         // Taking input from user and assigning to float variable.
    printf("Enter the car speed (miles/hour): \n");
    scanf("%f",&speed1);                        // Taking input from user and assigning to float variable.
    time1= dist1/speed1;                        // Calculating travel time and assigning to float variable.
    printf("travel time: %.2f", time1);         // Displaying the required output.
    return 0;
}
