/*
* LBYARCH XX22
* Rojo, Kate Lynn
* Romblon, Kathleen Mae
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

/*
    Dot Product Example

    v1 = (2, 5, 4)
    v2 = (3, 2, 1)
    r = ( 2 * 3) + (5 * 2) + (4 * 1) = 6 + 10 + 4 = 20
*/

extern double dotprod(double *vA, double *vB, int size);

double dot_product(double vA[], double vB[], int size) {
    double result = 0;
    for (int i = 0; i < size; i++) {
        result += vA[i] * vB[i];
    }
    return result;
}

double randFrom(double min, double max) {
    double range = (max - min);
    double div = RAND_MAX / range;
    return min + (rand() / div);
}

int main(void) {
    int size;
    double result;
    double dot_prod = 0;
    clock_t start_c, start_asm, end_c, end_asm;
    double cpu_time_c, cpu_time_asm;
    double avg_c, avg_asm;

    srand(time(NULL));

    // C kernel
    printf("Enter the size or length of the vectors: ");
    scanf_s("%d", &size);

    double* vA = (double*)malloc(size * sizeof(double));
    double* vB = (double*)malloc(size * sizeof(double));

    //printf("Enter the elements of the first vector: ");
    //printf("Elements of the first vector: ");
    for (int i = 0; i < size; i++) {
        // scanf_s("%lf", &vA[i]);
        vA[i] = randFrom(1.0, 10.0);
        //printf("%.2lf ", vA[i]);
    }
    printf("\n");

    //printf("Enter the elements of the second vector: ");
    //printf("Elements of the second vector: ");
    for (int i = 0; i < size; i++) {
        //scanf_s("%lf", &vB[i]);
        vB[i] = randFrom(1.0, 10.0);
        //printf("%.2lf ", vB[i]);
    }
    printf("\n");

    // C kernel
    avg_c = 0;
    for (int i = 0; i < 30; i++) {
        start_c = clock();
        result = dot_product(vA, vB, size);
        end_c = clock();
        cpu_time_c = ((double)end_c - start_c) / CLOCKS_PER_SEC;
        avg_c += cpu_time_c;

    }
    avg_c /= 30;

    printf("Dot Product from C: %.2lf\n", result);
    printf("Average time taken (after 30 runs) to run C kernel: %lf\n", avg_c);

    // asm kernel
    avg_asm = 0;
    int loop = 0;
    while (loop < 30) {
        start_asm = clock();
        dot_prod = dotprod(vA, vB, size);
        end_asm = clock();
        cpu_time_asm = ((double)end_asm - start_asm) / CLOCKS_PER_SEC;
        avg_asm += cpu_time_asm;
        loop++;
    }
    avg_asm /= 30;

    printf("Dot Product from asm: %.2lf\n", dot_prod);
    printf("Average time taken (after 30 runs) to run asm kernel: %lf\n", avg_asm);

    //Deallocate memory
    free(vA);
    free(vB);

    return 0;
}
