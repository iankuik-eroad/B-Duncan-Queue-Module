#include "queue.h"
#include "unity.h"

void setUp(void) {}
void tearDown(void) {}

void test_queue_create(void) {
    Queue *q = queue_create(5);
    TEST_ASSERT_NOT_NULL(q);
    TEST_ASSERT_EQUAL(0, queue_size(q));
    queue_destroy(q);
}