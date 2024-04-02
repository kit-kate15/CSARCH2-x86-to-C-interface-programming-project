/*
* LBYARCH XX22
* Rojo, Kate Lynn
* Romblon, Kathleen Mae
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*
    Dot Product Example

    v1 = (2, 5, 4)
    v2 = (3, 2, 1)
    r = ( 2 * 3) + (5 * 2) + (4 * 1) = 6 + 10 + 4 = 20
*/

extern double dotprod(double vA, double vB, double sum);

double dot_product(double vA[], double vB[], int size) {
    double result = 0;
    for (int i = 0; i < size; i++) {
        result += vA[i] * vB[i];
    }
    return result;
}

int main(void) {
    int size;
    double result;
    double dot_prod = 0;

    // C kernel
    printf("Enter the size or length of the vectors: ");
    scanf_s("%d", &size);

    double* vA = (double*)malloc(size * sizeof(double));
    double* vB = (double*)malloc(size * sizeof(double));

    printf("Enter the elements of the first vector: ");
    for (int i = 0; i < size; i++) {
        scanf_s("%lf", &vA[i]);
    }
    printf("Enter the elements of the second vector: ");
    for (int i = 0; i < size; i++) {
        scanf_s("%lf", &vB[i]);
    }
    result = dot_product(vA, vB, size);
    printf("Dot Product from C: %.2lf\n", result);

    // asm kernel
    for (int i = 0; i < size; i++) {
        dot_prod = dotprod(vA[i], vB[i], dot_prod);
    }
    printf("Dot Product from asm: %.2lf\n", dot_prod);

    //Deallocate memory
    free(vA);
    free(vB);

    return 0;
}