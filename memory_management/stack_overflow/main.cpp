// Lesson: Stack Overflow in C++

#include <iostream>

// 1. Recursive Function:
// This function will call itself indefinitely.
void recursiveFunction() {
    int stackVariable[1000]; // Allocate a large amount of memory on the stack for each call
    std::cout << "Address of stackVariable: " << &stackVariable << std::endl;
    recursiveFunction(); // Recursive call without a base case
}


void largeArray() {
    // This attempts to allocate an array of 10 million integers on the stack.
    // Depending on the system's stack limit, this might cause a stack overflow.
    int largeArray[10000000];
    std::cout << "Address of the start of largeArray: " << &largeArray[0] << std::endl;
}

int main() {
    // The stack has a limited amount of memory.
    // When functions are called, local variables and function data are placed on the stack.
    // Recursive functions or deep call chains can fill the stack quickly, causing a stack overflow.

    std::cout << "Starting the recursive function..." << std::endl;
    // recursiveFunction();

    // If you run this code, the recursiveFunction will keep calling itself, 
    // continuously allocating memory on the stack. Eventually, the stack will be exhausted,
    // causing a stack overflow. Depending on the system and compiler, this may result in a 
    // segmentation fault or another type of runtime error.


    std::cout << "Attempting to allocate a large array on the stack..." << std::endl;
    largeArray();

    return 0;
}