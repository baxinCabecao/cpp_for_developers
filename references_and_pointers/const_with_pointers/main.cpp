// Lesson: `const` with Pointers in C++

#include <iostream>

int main() {
    int original = 10;

    // 1. Pointer to constant:
    // The int value being pointed to can't be changed via this pointer.
    const int* ptrToConst = &original;
    std::cout << "Dereferenced ptrToConst: " << *ptrToConst << std::endl;
    // Uncommenting the next line would result in a compilation error.
    // *ptrToConst = 20;

    // 2. Constant pointer:
    // The address stored in the pointer can't be changed, but the int value it points to can.
    int* const constPtr = &original;
    std::cout << "Dereferenced constPtr before modification: " << *constPtr << std::endl;
    *constPtr = 30;  // Allowed, because the data pointed to is not const.
    std::cout << "Dereferenced constPtr after modification: " << *constPtr << std::endl;
    // Uncommenting the next line would result in a compilation error.
    // constPtr = nullptr;

    // 3. Constant pointer to a constant:
    // Neither the address stored in the pointer nor the int value it points to can be changed.
    const int* const constPtrToConst = &original;
    std::cout << "Dereferenced constPtrToConst: " << *constPtrToConst << std::endl;
    // Uncommenting the next two lines would result in compilation errors.
    // *constPtrToConst = 40;
    // constPtrToConst = nullptr;

    // Note: Understanding the position of the `const` keyword in relation to the type and the asterisk (*) is crucial for deciphering the intent.

    return 0;
}