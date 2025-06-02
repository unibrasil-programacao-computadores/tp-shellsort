#include "sort.h"
#include "input.h"

int main()
{
    sort_base_array(shellsort, "Shellsort");
    sort_ordered_arrays(shellsort, "shellsort");
    sort_reverse_ordered_arrays(shellsort, "shellsort");
    sort_uniform_arrays(shellsort, "shellsort");

    return 0;
}
