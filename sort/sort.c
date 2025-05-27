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

void selectionsort(double* arr, long arr_size)
{
 int i,j, min;
 double x;
 for(i = 0; i < arr_size-1; i++)
     {
     min = i;
     for(j=i + 1; j < arr_size; j++)
     {
         if(arr[j]<arr[min]){
             min = j;}
 }
         x = arr[min];
         arr[min] = arr[i];
         arr[i] = x;
}

void insertionsort(double* arr, long arr_size)
{
    int i, j;
    double x;

    for (i = 2; i <= arr_size; i++) { 
        x = arr[i];
        j = i - 1;
        arr[0] = x;
        while (x < arr[j]) {  
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}
