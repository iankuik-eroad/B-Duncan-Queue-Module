#include "queue.h"
#include <stdlib.h>

struct Queue {
    int *data;
    int capacity;
    int front;
    int rear;
    int size;
};

Queue *create_queue(int capacity) {
    Queue *q = (Queue *)malloc(sizeof(Queue)); // allocate memory
    if (!q) return NULL;
    q->data = (int *)malloc(capacity * sizeof(int)); // allocate memory
    if (!q->data) {
        free(q); // free memory
        return NULL;
    }
    q->capacity = capacity;
    q->front = 0;
    q->rear = -1;
    q->size = 0;
    return q;
}

void queue_destroy(Queue *q) {
    free(q->data);
    free(q);
}

int queue_enqueue(Queue *q, int value) {
    if (q->size == q->capacity) {
        // Queue is full, cannot enqueue
        return -1;
    }
    
    q->rear = (q->rear + 1) % q->capacity;  // Wrap around if necessary
    q->data[q->rear] = value;               // Insert the new element
    q->size++;                              // Increment the size
    return 1;
}

int queue_pop(Queue *q) {
    if (q->size == 0) {
        // Queue is empty, return an error value
        return -1;  // Or another error value
    }
    
    int value = q->data[q->front];
    // Update the front pointer (wrap around if necessary)
    q->front = (q->front + 1) % q->capacity;
    // Decrease the size of the queue
    q->size--;
    return value;  // Return the dequeued element
}

int queue_get_size(Queue *q) {
    return q->size;
}