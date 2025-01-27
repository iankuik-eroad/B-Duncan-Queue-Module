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

// Main function for Unity
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_queue_create);
    return UNITY_END();
}