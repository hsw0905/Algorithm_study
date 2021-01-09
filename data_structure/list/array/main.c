#include "arraylist.h"

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
