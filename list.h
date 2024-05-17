#ifndef LIST_H
#define LIST_H
#include "linked_list.h"
// TODO: List 클래스 정의 작성
class List : public LinkedList {
    public:
    List();
    void insert(int index, int value);
    int get(int index);
    void remove(int index);
    LinkedList* list;
};

#endif