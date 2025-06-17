#include "sort.h"
#include <math.h>
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
    int i, j, salto;
    double aux;
    //Calculo de knuth
    float potencia = log(arr_size + 1) / log(3);
    potencia = floor(potencia + 0.5);
    salto = (pow(3, potencia) - 1) / 2;
    //Inicio ShellSort
    while (salto > 0) {
        for (i = 0; i < arr_size - salto; i++) {
            if (arr[i] > arr[i + salto]) {
                aux = arr[i + salto];
                arr[i + salto] = arr[i];
                arr[i] = aux;
                j = i - salto;

                while (j >= 0) {
                    if (aux < arr[j]) {
                        arr[j + salto] = arr[j];
                        arr[j] = aux;
                    } else {
                        break;
                    }
                    j = j - salto;
                }
            }
        }
        //Inverca de knuth
        salto = (salto - 1) / 3;
    }
}
