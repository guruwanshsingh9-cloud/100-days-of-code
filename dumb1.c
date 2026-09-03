//write a c program to find the shear modulus when shear strain and shear stress is given
#include <stdio.h>
int main() {
    float shear_stress, shear_strain, shear_modulus;

    printf("Enter the shear stress (in Pascals): ");
    scanf("%f", &shear_stress);

    printf("Enter the shear strain: ");
    scanf("%f", &shear_strain);

    if (shear_strain != 0) {
        shear_modulus = shear_stress / shear_strain;
        printf("Shear modulus: %.2f Pascals\n", shear_modulus);
    } else {
        printf("Shear strain cannot be zero.\n");
    }

    return 0;
}