//write a c program to find the mirror magnification when object distance and image distance is given
#include <stdio.h>
int main() {
    float object_distance, image_distance, magnification;

    printf("Enter the object distance (in meters): ");
    scanf("%f", &object_distance);

    printf("Enter the image distance (in meters): ");
    scanf("%f", &image_distance);

    if (object_distance != 0) {
        magnification = image_distance / object_distance;
        printf("Mirror magnification: %.2f\n", magnification);
    } else {
        printf("Object distance cannot be zero.\n");
    }

    return 0;
}