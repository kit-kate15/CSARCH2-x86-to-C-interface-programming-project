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
    int size;
    float result;

    printf("Enter the size or length of the vectors: ");
    scanf_s("%d", &size);

    float* v1 = (float*)malloc(size * sizeof(float));
    float* v2 = (float*)malloc(size * sizeof(float));

    printf("Enter the elements of the first vector: ");
    for (int i = 0; i < size; i++) {
        scanf_s("%f", &v1[i]);
    }
    printf("Enter the elements of the second vector: ");
    for (int i = 0; i < size; i++) {
        scanf_s("%f", &v2[i]);
    }
    result = dot_product(v1, v2, size);
    printf("Dot Product: %.f\n", result);

    //Deallocate memory
    free(v1);
    free(v2);

    return 0;
}
