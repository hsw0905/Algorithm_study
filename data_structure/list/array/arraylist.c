#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	unsigned int length;
	unsigned int capacity;
	int *pArray;
} arrayList_t;

arrayList_t *createList(unsigned int capacity)
{
	int i;
	arrayList_t *newList = (arrayList_t *)malloc(sizeof(arrayList_t));
	newList->capacity = capacity;
	newList->length = 0;
	newList->pArray = malloc(sizeof(int) * capacity);

	return newList;
}

void freeList(arrayList_t *list)
{
	free(list->pArray);
	free(list);
}

arrayList_t *doublingList(arrayList_t *list)
{
	int i;
	arrayList_t *newList = (arrayList_t *)malloc(sizeof(arrayList_t));
	newList->capacity = list->capacity * 2;
	newList->length = list->length;
	newList->pArray = malloc(sizeof(int) * newList->capacity);

	printf("Initiating doublingList\n");
	for (i = 0; i < newList->length; i++)
	{
		newList->pArray[i] = list->pArray[i];
	}

	freeList(list);
	list = NULL;

	return newList;
}

int isFull(arrayList_t *list)
{
	if (list->capacity <= list->length)
		return 1;

	return 0;
}

int append(arrayList_t *list, int data)
{
	if (isFull(list))
	{
		printf("Can't append data, list is full\n");
		return 0;
	}
	else
	{
		list->pArray[list->length] = data;
		list->length++;
		return 1;
	}
}

int prepend(arrayList_t *list, int data)
{
	int i;
	if (isFull(list))
	{
		printf("Can't prepend data, list is full\n");
		return 0;
	}
	else
	{
		for (i = list->length; i >= 0; i--)
		{
			list->pArray[i + 1] = list->pArray[i];
		}
		list->pArray[0] = data;
		list->length++;

		return 1;
	}
}

int insert(arrayList_t *list, int data, int index)
{
	int i;
	if (isFull(list))
	{
		printf("Can't prepend data, list is full\n");
	}
	if (list->length < index)
	{
		printf("Can't prepend data, out of index\n");
		return 0;
	}
	else
	{
		for (i = list->length; i > index; i--)
		{
			list->pArray[i] = list->pArray[i - 1];
		}
		list->pArray[index] = data;
		list->length++;

		return 1;
	}
}

int removeData(arrayList_t *list, int index)
{
	int i;
	if (list->length < index)
	{
		printf("Can't remove data, out of index\n");
		return 0;
	}
	else
	{
		for (i = index; i < list->length; i++)
		{
			list->pArray[i] = list->pArray[i + 1];
		}
		list->pArray[list->length - 1] = '\0';
		list->length--;

		return 1;
	}
}

void displayList(arrayList_t *list)
{
	int i;
	printf("List info\n");
	printf("capacity: %d, length: %d\n", list->capacity, list->length);
	printf("data\n");
	for (i = 0; i < list->length; i++)
	{
		printf("array[%d]: %d\n", i, list->pArray[i]);
	}
}

int main()
{
	arrayList_t *mylist = createList(4);
	arrayList_t *expendedlist;
	append(mylist, 1);
	append(mylist, 2);
	append(mylist, 3);
	prepend(mylist, 4);
	insert(mylist, 5, 2);
	// doubling
	expendedlist = doublingList(mylist);
	insert(expendedlist, 6, 1);
	removeData(expendedlist, 1);
	removeData(expendedlist, 0);
	displayList(expendedlist);
	freeList(expendedlist);
}
