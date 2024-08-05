#ifndef _SORT_
#define _SORT_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - doubly linked list node
 * @n: int stored in node
 * @prev: pointer to previous element of list
 * @next: pointer to next element of list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);

#endif
