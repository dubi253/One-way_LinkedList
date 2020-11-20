#include "LinkedList.h"
list::list() {
    head= nullptr;
}

list::~list() {
    for (int i = 0; i < length; ++i) {
        node *current_node = head;
        while (current_node->next != nullptr) {
            current_node = current_node->next;
        }
        delete current_node;
    }
}

//创建新的头节点
void list::create(int value) {
    node *temp = new node(value);
    node *current_node = head;
    temp->next = current_node;
    head = temp;
    length++;
}

//新增节点
void list::append(int _value) {
    node *current_node = head;
    while (current_node->next != nullptr) {
        current_node = current_node->next;
    }
    current_node->next = new node(_value);
    ++length;
}

//插入节点，位置0为第一个
void list::insert(int no, int _value) {
    node *current_node = head;
    for (int i = no; i > 1; i--) {
        current_node = current_node->next;
    }
    node *a = new node(_value);
    a->next = current_node->next;
    current_node->next = a;
    ++length;
}

int list::search(int target) {
    int a = 0;
    node *current_node = head;
    while(current_node != nullptr)
    {
        if(current_node->value == target){
            return a;
        }
        current_node = current_node->next;
        ++a;
    }
    return -1;
}

void list::erase(int target) {
    int a = search(target);
    if (a == 0) {
        node *temp = head;
        head = head->next;
        --length;
        delete temp;
        return;
    } else if (a == -1){
        std::cout << "Target value is not exist." << std::endl;
        return;
    }
    node *current_node = head;
    while (current_node->next->value != target && a + 1 < length) {
        current_node = current_node->next;
        ++a;
    }
    node *temp = current_node->next;
    current_node->next = temp->next;
    delete temp;
    --length;
}

void list::print() {
    if(head == nullptr)
    {
        std::cout << "LinkedList is empty." << std::endl;
        return;
    }
    node *current_node = head;
    int a = 0;

    while (current_node->next != nullptr && a + 1 < length) {
        std::cout << current_node->value << std::endl;
        current_node = current_node->next;
        ++a;
    }
    std::cout << current_node->value << std::endl;
}