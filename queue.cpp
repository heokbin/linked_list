#include "queue.h"
// TODO: Queue 클래스 구현 작성

Queue::Queue() {
}
void Queue::push(int data) {
    LinkedList::insert(size_, data);
}

int Queue::pop() {
    int getValue = 0;
    getValue = LinkedList::get(0);
    LinkedList::remove(0);
    return getValue;
}

int Queue::peek() {
    return LinkedList::get(0);
}

void Queue::operator+=(const int i) {
    Queue::push(i);
}