#include "addressbook_list.h"

TelephoneBookList * createTelephoneBookList()
{
    TelephoneBookList * telephonebooklist = malloc(sizeof(*telephonebooklist));

    if(telephonebooklist != NULL)
    {
        telephonebooklist->head = NULL;
        telephonebooklist->tail = NULL;
        telephonebooklist->current = NULL;
        telephonebooklist->size = 0;
        return telephonebooklist;
    }
    else
    {
        freeTelephoneBookList(telephonebooklist);
        return NULL;
    }
}

void freeTelephoneBookList(TelephoneBookList* list)
{
    if(list->head == NULL)
    {
        free(list);
    }
}

TelephoneBookNode * createTelephoneBookNode()
{
    TelephoneBookNode * newNode = malloc(sizeof(*newNode));
    if(newNode != NULL)
    {
        newNode->nextNode = NULL;
        newNode->previousNode = NULL;
        return newNode;
    }
    else
    {
        return NULL;
    }
}

void freeTelephoneBookNode(TelephoneBookNode * node)
{
    TelephoneBookNode * deleteNode;
    while(node->nextNode == NULL)
    {
        deleteNode = node->previousNode;
        free(node);
        node = deleteNode;
        printf("I am getting here\n");
    }
}

Boolean insert(TelephoneBookList * list, TelephoneBookNode * node)
{
    TelephoneBookNode * prevNode, * curNode;

    prevNode = NULL;
    curNode = list->head;

    while(curNode != NULL)
    {
        prevNode = curNode;
        curNode = curNode->nextNode;
    }

    if(list->head == NULL)
    {
        list->head = node;
        list->current = node;
    }

    else if(list->head != NULL)
    {
        prevNode->nextNode = node;
        node->nextNode = curNode;
    }
    list->size++;
    return FALSE;

}

Boolean forward(TelephoneBookList * list, int forward)
{
    return FALSE;
}

Boolean backward(TelephoneBookList * list, int backward)
{
    return FALSE;
}

Boolean delete(TelephoneBookList * list)
{
    return FALSE;
}

TelephoneBookNode * findByID(TelephoneBookList * list, int id)
{
    return NULL;
}

TelephoneBookNode * findByName(TelephoneBookList * list, char * name)
{
    return NULL;
}
