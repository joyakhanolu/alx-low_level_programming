#include "list.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h - list_t list
 * Return: number of nodes in h
 */

size_t print_list(const list_t *h)
{
	position p = *h;
	Strc *tmp;
	int i;
	
	for(i = 0; i < 10; i++)
	{
		if(tmp = (Strc *) malloc (sizeof(Strc)))
		{
			tmp->row = i;
			tmp->col = i + 1;
			tmp->value = i + 2;
			p = insertToList(p,tmp);
		}
	}
}
