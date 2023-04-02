#ifndef LISTS_H
#define LISTS_H

struct list
{
	char *str;
	unsigned int len;
	struct list *next;
}
typedef struct list list_t

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif
