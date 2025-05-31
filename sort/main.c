#include "sort.h"
#include "input.h"

int main()
{
    sort_base_array(shellsort, "Shellsort");
    sort_ordered_arrays(shellsort, "Shellsort");
    sort_reverse_ordered_arrays(shellsort, "Shellsort");
    sort_uniform_arrays(shellsort, "Shellsort");

    return 0;
}
