#ifndef _ARRAYLIST_H
#define _ARRAYLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	unsigned int length;
	unsigned int capacity;
	int *pArray;
} arrayList_t;

arrayList_t *createList(unsigned int capacity);
void freeList(arrayList_t *list);
arrayList_t *doublingList(arrayList_t *list);
int isFull(arrayList_t *list);
int append(arrayList_t *list, int data);
int prepend(arrayList_t *list, int data);
int insert(arrayList_t *list, int data, int index);
int removeData(arrayList_t *list, int index);
void displayList(arrayList_t *list);

#endif
