#include "linked_list.h"

// TODO: LinkedList 클래스 구현 작성
LinkedList::LinkedList() {
    head_ = new Node(0); //더미 헤드
    size_ = 0;
}
LinkedList::~LinkedList() {
    Node* currNode = head_;
    Node* nextNode;

    while(nextNode != nullptr) {
        nextNode = currNode -> next_;
        delete currNode;
        currNode = nextNode;
    }
    size_ = 0;
}
void LinkedList::print() {
    Node* prevNode = head_;
    while(prevNode->next_ != nullptr) {
        prevNode = prevNode -> next_;
        std::cout << prevNode -> value_ << " ";
    }
    std::cout << std::endl;
}

void LinkedList::insert(int index, int value) {
    Node* prevNode = head_;
    for (int i = 0; i < index; i++) {
        prevNode = prevNode->next_;
    }
    Node* newNode = new Node(value);
    newNode -> next_ = prevNode -> next_;
    prevNode -> next_ = newNode;
    size_++;
}

int LinkedList::get(int index) {
    Node* currNode = head_;
    for (int i = 0; i <= index; i++) {
        currNode = currNode -> next_;
    }
    return currNode -> value_;
}

void LinkedList::remove(int index) {
    Node* prevNode = head_;
    for (int i = 0; i < index; i++) {
        prevNode = prevNode->next_;
    }
    Node* currNode = prevNode -> next_;
    prevNode -> next_ = currNode -> next_;
    delete currNode;
    size_--;
}