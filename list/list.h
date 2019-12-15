#ifndef LIST_H
#define LIST_H

#include<stdio.h>

//节点
typedef struct _NODE
{
    int             m_data;
    struct _NODE    *next;

}   node_t;

//单项链表
typedef struct _LIST
{
    node_t  *head;
}   list_t;

//操作
void init_list(list_t *list);
void add_node(list_t *list, int data);
void delete_node(list_t *list, int data);
node_t *find_node(list_t *list, int data);
list_t *reverse(list_t *list);
list_t *sort(list_t *list);
void print_list(list_t *list);
void swap(int *a, int *b);

#endif // LIST_H
