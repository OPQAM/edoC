// NOTE: in the last example we looked at the basics of a doubly linked list
// here, I'll show you how you would normally use them as a 'queue'
// a queue is a 'first-in, first-out' (FIFO) structure
// NOTE: you can also easily insert and remove items at any point in the queue if you wish, 
// but it is more common to keep to FIFO operations

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// this what is going to be in the queue
typedef struct listitem {
	struct listitem *next;			// pointer to next item
	struct listitem *prev;			// pointer to previous item
	int data;						// some data
} LISTITEM;

// this is the queue 'header'
typedef struct {
	struct listitem *first;			// pointer to first item
	struct listitem *last;			// pointer to last item
} LISTHDR;

LISTHDR head;						// declare this statically so that 'enqueue' and 'dequeue' can use it

// this puts an item in at the end of the queue
void enqueue(LISTITEM *item) {
	LISTITEM *temp;

	temp = head.last;				// get the 'last' item in the queue and keep hold of it
	head.last = item;				// put the item in the queue at the end
	item->prev = temp;				// link back to old 'last' item
	item->next = (LISTITEM*)&head;	// set the forward link of the new item
	temp->next = item;				// and finally set the forward link of the old 'last' item to the new one
}

// this removes an item from the front of the queue - returns the item or NULL if there are no more items
LISTITEM* dequeue() {
	LISTITEM *temp;

	temp = head.first;				// get the 'first' item
	if (temp == (LISTITEM*)&head) {	// if the head of the queue points to itself ...
		temp = NULL;				// ... then the queue is empty 			
	}
	else {
		head.first = temp->next;		// and set the queue header to point to the 'second' item
		head.first->prev = (LISTITEM*)&head;
	}
	return temp;
}

int main() {
	LISTITEM *temp;

	// first, make an empty queue
	// ... which is a queue where the header points to itself and there are no items in it
	head.first = (LISTITEM*)&head;
	head.last = (LISTITEM*)&head;
									
	for (int i = 0; i < 3; i++) {	// as before, populate the queue
		temp = malloc(sizeof(LISTITEM)); // allocate some memory for the new queue item
		temp->data = i;				// set the item's data to the loop count so that we can see where it is in the queue
		enqueue(temp);				// and put it in the queue
	}
    
    printf("first item = %d\n", head.first->data );
    printf("last item = %d\n\n", head.last->data );

	// now let's dequeue from the end of the queue
	do {							// keep going until the queue is empty
		temp = dequeue();			// if the queue is empty we will get NULL returned
		if (temp != NULL) {
			printf("data is %d\n", temp->data);
			free(temp);				// call 'free' to tidy up 
		}
	} while (temp != NULL);

	return 0;
}