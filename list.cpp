#include "list.h"

List::List() {
    list = new LinkedList();
}
void List::insert(int index, int value) {
    LinkedList::insert(index, value);
}
int  List::get(int index) {
    return LinkedList::get(index-1);
}
void List::remove(int index) {
    LinkedList::remove(index-1);
}
// TODO: List 클래스 구현 작성