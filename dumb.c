//write c program to find the angular velocity when angular displacement and time is given
#include <stdio.h>
int main() {
    float angular_displacement, time, angular_velocity;

    printf("Enter the angular displacement (in radians): ");
    scanf("%f", &angular_displacement);

    printf("Enter the time (in seconds): ");
    scanf("%f", &time);

    if (time != 0) {
        angular_velocity = angular_displacement / time;
        printf("Angular velocity: %.2f radians/second\n", angular_velocity);
    } else {
        printf("Time cannot be zero.\n");
    }

    return 0;
}