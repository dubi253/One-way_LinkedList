#ifndef LIST_LINKEDLIST_H
#define LIST_LINKEDLIST_H


#include <iostream>
    struct node {
        int value;
        node *next;

        explicit node(int _value) {
            value = _value;
            next = nullptr;
        }
    };

    class list {
    private:
        node *head;
        int length = 0;
    public:
        list();

        ~list();

        void create(int);

        void append(int);

        void erase(int);

        void insert(int no, int _value);

        int search(int);

        void print();
    };


#endif //LIST_LINKEDLIST_H
