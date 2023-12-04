#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for 0x03-python-data_structures project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
int is_palindrome(listint_t **head);
def element_at(my_list, idx):
def replace_in_list(my_list, idx, element):
def no_c(my_string):
def print_matrix_integer(matrix=[[]]):
def multiple_returns(sentence):
def max_integer(my_list=[]):
def divisible_by_2(my_list=[]):
def delete_at(my_list=[], idx=0):
void print_python_list_info(PyObject *p);
#endif /* LISTS_H */
