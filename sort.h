#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdarg.h>

/*Bitonic sort's comparison direction macros*/
#define UP 0
#define DOWN 1

/**
 * enum bool - Boolean values enumeration
 * @false: Equals 0
 * @true: Equals 1
 */

typedef enum bool
{
	false = 0,
	true
}bool;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* provided printing functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* sorting algorithms prototypes given */
void bubble_sort(int *array, size_t size);

#endif /*_SORT_H_*/