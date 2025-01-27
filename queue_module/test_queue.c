#include "queue.h"
#include "unity.h"
#define UNIT_TEST

void setUp(void) {}
void tearDown(void) {}

void test_queue_create(void) {
    Queue *q = create_queue(5); // create queue
    TEST_ASSERT_NOT_NULL(q); // check if queue was created
    TEST_ASSERT_EQUAL(0, queue_get_size(q)); // ensure queue starts empty
}

void test_queue_enqueue(void) {
    Queue *q = create_queue(5);
    queue_enqueue(q, 12);
    TEST_ASSERT_EQUAL_INT(1, queue_get_size(q));
    queue_enqueue(q, 12);
    TEST_ASSERT_EQUAL_INT(2, queue_get_size(q));
    queue_destroy(q);
    TEST_ASSERT_EQUAL_INT(0, queue_get_size(q));
}

void test_queue_dequeue(void) {
    Queue *q = create_queue(5);
    queue_enqueue(q, 12);
    int a = queue_pop(q);
    TEST_ASSERT_EQUAL_INT(0, queue_get_size(q));
    TEST_ASSERT_EQUAL_INT(12, a);
    queue_destroy(q);
}

void test_queue_dequeue_empty(void) {
    Queue *q = create_queue(5);
    int result = queue_pop(q);
    TEST_ASSERT_EQUAL_INT(-1, result);  // Check if the function returns -1 when trying to dequeue from an empty queue
    queue_destroy(q);
}

// Main function for Unity
int main(void) {
    UNITY_BEGIN();
    // RUN_TEST(test_queue_create);
    RUN_TEST(test_queue_dequeue_empty);
    return UNITY_END();
}