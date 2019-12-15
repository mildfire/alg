#include "list.h"

//prev_node: 前驱节点
//p_node： 任意节点，其中任意节点为前驱节点的下一个指向

void init_list(list_t *list)
{
    list->head = NULL;
}

void add_node(list_t *list, int data)
{
    node_t *p_node;
    node_t *prev_node;

    p_node = (node_t *)malloc(sizeof(node_t));
    p_node->m_data = data;
    p_node->next = NULL;

    if(list->head == NULL)
    {
        list->head = p_node;
    }
    else
    {
        prev_node = list->head;
        while (prev_node->next)
        {
            prev_node = prev_node->next;
        }
        prev_node->next = p_node;
    }
}

void delete_node(list_t *list, int data)
{
    if(list->head == NULL) return;

    node_t *prev_node;
    node_t *p_node;

    prev_node = list->head;
    if(prev_node->m_data == data)
    {
        list->head = prev_node->next;
        free(prev_node);
        return;
    }

    while (prev_node->next)
    {
        p_node = prev_node->next;
        if(p_node->m_data == data)
        {
            prev_node->next = p_node->next;
            free(p_node);
            break;
        }
        prev_node = prev_node->next;
    }
}
