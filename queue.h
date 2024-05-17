#ifndef QUEUE_H
#define QUEUE_H
#include "linked_list.h"
class Queue : public LinkedList {
    public:
    Queue();
    void push(int data);
    int pop();
    int peek();
    void operator+=(const int i);
};
// TODO: Queue 클래스 정의 작성

#endif