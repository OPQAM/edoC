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
	struct listitem *first;			// pointer to 1st item
	struct listitem *last;			// pointer to last item
} LISTHDR;

LISTHDR head;						// our queue

									// this puts an item in at the end of a queue
void enqueue(LISTHDR *queue, LISTITEM *item) {
	LISTITEM *temp;

	temp = queue->last;				// get the 'last' item in the queue and keep hold of it
	queue->last = item;				// put the item in the queue at the end
	item->prev = temp;				// link back to old 'last' item
	item->next = (LISTITEM*)queue;	// set the forward link of the new item
	temp->next = item;				// and finally set the forward link of the old 'last' item to the new one
}

// this removes an item from the front of a queue - returns the item or NULL if there are no more items
LISTITEM* dequeue(LISTHDR *queue) {
	LISTITEM *temp;

	temp = queue->first;				// get the 'first' item
	if (temp == (LISTITEM*)queue) {		// if the head of the queue points to itself ...
		temp = NULL;					// ... then the queue is empty 			
	}
	else {
		queue->first = temp->next;		// and set the queue header to point to the 'second' item
		queue->first->prev = (LISTITEM*)queue;
	}
	return temp;
}

// returns the number of items in a queue
int queue_length(LISTHDR* queue) {
	LISTITEM *temp;
	int length;

	temp = queue->first;			// get the 'first' item
	length = 0;						// initialize the length
	do {
		// check for an empty queue or if we've gone through the whole queue
		if (temp == (LISTITEM*)queue) {
			temp = NULL;			// this will break out of the do ... while loop
			break;
		}
		temp = temp->next;			// get the next item in the queue
		length = length + 1;
	} while (temp != NULL);

	return length;
}


int main() {
	LISTITEM *temp;

	// first, make an empty queue
	// ... which is a queue where the header points to itself and there are no items in it
	head.first = (LISTITEM*)&head;
	head.last = (LISTITEM*)&head;

    printf("At start, the length of the queue is %d\n", queue_length(&head));
	for (int i = 0; i < 3; i++) {	// as before, populate the queue
		temp = malloc(sizeof(LISTITEM)); // allocate some memory for the new queue item
		temp->data = i;				// set the item's data to the loop count so that we can see where it is in the queue
		enqueue(&head, temp);	// and put it in the queue
	}
	printf("After initialization, the length of the queue is %d\n\n", queue_length(&head));

	// see what we've got left
	do {							// keep going until the queue is empty
		printf("The length of the queue is now %d\n", queue_length(&head));
		temp = dequeue(&head);		// if the queue is empty we will get NULL returned
		if (temp != NULL) {
			printf("Dequeued item. Data is %d\n", temp->data);
			free(temp);				// call 'free' to tidy up 
		}
	} while (temp != NULL);

	return 0;
}
