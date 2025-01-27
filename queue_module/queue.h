#ifndef QUEUE_H
#define QUEUE_H

typedef struct Queue Queue;

Queue *create_queue(int capacity);
void queue_destroy(Queue *q);
void queue_enqueue(Queue *q, int value);

// Helper Functions for testing
int queue_get_size(Queue *q);

#endif // QUEUE_H