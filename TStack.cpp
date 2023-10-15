//
// Created by Арсений Копаев on 15.10.2023.
//

#include "TStack.h"

TStack::TStack(): top(nullptr) {}

TStack::~TStack() {
    clear();
}

void TStack::push(int elem) {
    Node* p = new Node(elem);
    p->next = top;
    top = p;
}

void TStack::pop() {
    Node* p = top;
    top = top->next;

    p->next = nullptr;
    delete p;
    p = nullptr;
}

int TStack::peak() {
    return top->data;
}

bool TStack::isEmpty() {
    return top == nullptr;
}

void TStack::clear() {
    while (!isEmpty()) {
        pop();
    }
}

