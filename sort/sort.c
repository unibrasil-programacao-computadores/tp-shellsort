#include "sort.h"

int compare(const void* a, const void* b)
{
    double diff =  *(double*)a - *(double*)b;
    return diff > 0 ? 1 : diff < 0 ? -1 : 0;
}

void quicksort(double* arr, long arr_size)
{
    qsort(arr, arr_size, sizeof(double), compare);
}

void shellsort(double* arr, long arr_size) {
    int i, j, h;
    double aux;

    float k = log(arr_size + 1) / log(3);
    k = floor(k + 0.5);
    h = (pow(3, k) - 1) / 2;

    while (h > 0) {
        for (i = 0; i < arr_size - h; i++) {
            if (arr[i] > arr[i + h]) {
                aux = arr[i + h];
                arr[i + h] = arr[i];
                arr[i] = aux;
                j = i - h;

            }
        }
    }
}
