#include "LinkedList.h"
#include "Simple_Interface.h"

int main() {
//    list test;
//    test.create(1);
//    test.append(3);
//    test.insert(1,2);
//    test.print();
//    test.erase(1);
//    test.print();
    char input;
    First_Interface();
    while (std::cin >> input){
        Interactivity(input);
    }
    return 0;
}
