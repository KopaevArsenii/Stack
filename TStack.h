//
// Created by Арсений Копаев on 15.10.2023.
//

#ifndef STACK_TSTACK_H
#define STACK_TSTACK_H


class TStack {
    struct Node {
        int data;
        Node* next;
        Node (int elem) {
            data = elem;
            next = nullptr;
        }
    };

    Node* top;
    void clear();
public:
    TStack();
    ~TStack();
    void push(int elem);
    void pop();
    int peak();
    bool isEmpty();
};


#endif //STACK_TSTACK_H
