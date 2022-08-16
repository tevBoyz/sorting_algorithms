#include "sort.h"

void quick_s(int *array, int low, int high, size_t size);

/**
 * quick_sort - sorts array using quick sort alg
 * @array: array to sort
 * @size: array size
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

quick_s(array, 0, size - 1, size);
}

/**
 * partition - partition the array sort
 * @array: array
 * @low: lower section
 * @high: higher section
 * @size: size of arrays
 * Return: 1
 */
int partition(int *array, int low, int high, size_t size)
{
int i = low - 1, j = low;
int piv = array[high], tmp = 0;

for (; j < high; j++)
{
if (array[j] < piv)
{
i++;
if (array[i] != array[j])
{
tmp = array[i];
array[i] = array[j];
array[j] = tmp;
print_array(array, size);
}
}
}
if (array[i + 1] != array[high])
{
tmp = array[i + 1];
array[i + 1] = array[high];
array[high] = tmp;
print_array(array, size);
}
return (i + 1);
}

/**
 * quick_s - quick sort
 * @array: array to sort
 * @low: lower
 * @high: higher
 * @size: size of array
 * Return: void
 */

void quick_s(int *array, int low, int high, size_t size)
{
int piv;

if (low < high)
{
piv = partition(array, low, high, size);
quick_s(array, low, piv - 1, size);
quick_s(array, piv + 1, high, size);
}
}
