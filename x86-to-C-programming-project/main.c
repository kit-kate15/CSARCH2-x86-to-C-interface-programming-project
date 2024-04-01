#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*
    Dot Product Example

    v1 = (2, 5, 4)
    v2 = (3, 2, 1)
    r = ( 2 * 3) + (5 * 2) + (4 * 1) = 6 + 10 + 4 = 20
*/

float dot_product(float v1[], float v2[], int size) {
    float result = 0;
    for (int i = 0; i < size; i++) {
        result += v1[i] * v2[i];
    }
    return result;
}

int main(void) {
    float v1[3], v2[3], result;
    printf("Enter the elements of the first vector: ");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &v1[i]);
    }
    printf("Enter the elements of the second vector: ");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &v2[i]);
    }
    result = dot_product(v1, v2, 3);
    printf("Dot Product: %.f\n", result);

    return 0;
}