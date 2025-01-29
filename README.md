# Simple Queue Module
This details an implementation of a simple queue module implemented in C.

It uses a Queue struct, modelled after an array, containing the parameters 
- data -> the data at each location in the queue
- capacity -> the maximum number of elements within the queue
- front -> the index of the first element
- rear -> the index of the last element
- size -> the amount of elements remaining in the queue
An array was chosen due to its ease and simplicity, compared to a linked list. Gives clear amounts of memory to be allocated.

## Functionality
### Queue Create
Creates a queue, with a specified capacity. Cannot be zero. Allocates required memory to queue.

### Queue enqueue
Add another element to the queue. Check for adherance to max capacity.

### Queue dequeue/ pop
Removes the top element of the queue. Check for at least 1 element in queue first.

### Queue Destroy
Destroys the queue. Clears all elements from the queue, frees all memory allocated to it.



 
