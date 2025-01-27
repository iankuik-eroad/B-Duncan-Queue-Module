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

int queue_get_size(Queue *q) {
    return q->size;
}