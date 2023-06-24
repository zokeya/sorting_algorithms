#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* Comparison derection macros for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * enum bool - Enumartion of Boolean values.
 * @false: Equals 0.
 * @true: Equals 1.
*/
typedef enum bool
{
  false = 0,
  true
} bool;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Interger store in the node
 * @prev: Pinter to the previous element of the list
 * @next: Point to the next element of the list.
*/
typedef struct  listint_s
{
  const int n;
  struct  listint_s *prev;
  struct listint_s *next;
} listint_t;

/* Printing helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Sorting alogaritms */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void biotonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif /* SORT_H*/
