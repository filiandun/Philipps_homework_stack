#include <iostream>
#include "stack.h"

int main()
{
    setlocale(LC_ALL, "rus");

    Stack stack;
    // stack.delete_node(); // ничего удалятся не будет, так как стек пустой

    stack.push_back(6);
    stack.push_back(1);
    stack.push_back(80);
    stack.push_back(23);

    stack.print();


    std::cout << std::endl;
    stack.delete_node();
    stack.delete_node();

    stack.print();

}
