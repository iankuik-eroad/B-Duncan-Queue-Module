#ifndef QUEUE_H
#define QUEUE_H

typedef struct Queue Queue;

Queue *create_queue(int capacity);

// Helper Functions for testing
int queue_get_size(Queue *q);

#endif // QUEUE_H