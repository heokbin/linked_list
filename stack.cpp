#include "stack.h"

// TODO: Stack 클래스 구현 작성
Stack::Stack() {
}
void Stack::push(int data) {
    LinkedList::insert(0, data);
}

int Stack::pop() {
    int getValue = LinkedList::get(0);
    LinkedList::remove(0);
    return getValue;
}

int Stack::peek() {
    return LinkedList::get(0);
}

void Stack::operator+=(const int i) { 
    Stack::push(i);
}
