#include "Simple_Interface.h"

using namespace std;
list sample;
void First_Interface(){
    cout << "Please input a value of the head node." << endl;
    int value;
    cin >> value;
    sample.create(value);
    cout << "Done." << std::endl;
    Interface();
}
void Interface(){
    cout << endl;
    cout << "Please enter the corresponding number." << endl;
    cout << "1: Input a head node." << endl;
    cout << "2: Input/Modify the value of a node." << endl;
    cout << "3: Delete a value." << endl;
    cout << "4: Find the location of the target value." << endl;
    cout << "5: Print the current LinkedList." << endl;
}
void Interactivity(char input){
    int location = 0, value = 0;
    switch (input) {
        case '1':cout << "Please enter the target node value." << endl;
            cin >> value;
            sample.create(value);
            cout << "Done." << std::endl;
            break;
        case '2':
            cout << "Please enter the target node location.\nFor example: The position of the (first)head node is 0." << endl;
            cin >> location;
            cout << "Please enter the target node value." << endl;
            cin >> value;
            sample.insert(location, value);
            cout << "Done." << std::endl;
            break;
        case '3':cout << "Please enter the target value." << endl;
            cin >> value;
            sample.erase(value);
            cout << "Done." << std::endl;
            break;
        case '4':std::cout << "Please enter the target value." << endl;
            cin >> value;
            cout << "The location of the target value " << value << " is " << sample.search(value) << endl;
            break;
        case '5':
            cout << endl;
            sample.print();
            break;
        default: cout << "You have entered an incorrect command code." << endl; break;
    }
    Interface();
}