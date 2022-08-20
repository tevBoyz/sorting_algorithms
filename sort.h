#ifndef __SORT__
#define __SORT__
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - doubly linked list node
 *
 * @n: interger data
 * @prev: pointer to prev node
 * @next: pointer to next node
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);


void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);


#endif /* __SORT__ */
