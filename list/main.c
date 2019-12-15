#include <stdio.h>
#include "list.h"

int main()
{
    list_t *a;

    a = (list_t *)malloc(sizeof(list_t));
    init_list(a);

    delete_node(a, 2);

    printf("Hello World!\n");
    return 0;
}
