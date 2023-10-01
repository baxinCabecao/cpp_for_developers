// Lesson: Relationship between Arrays and Pointers/References in C++

#include <iostream>

int main() {
    // 1. Defining an array:
    int numbers[5] = {10, 20, 30, 40, 50};

    // 2. Array name as a pointer:
    // The array name 'numbers' acts like a pointer to the first element.
    int* ptr = numbers;
    std::cout << "First element using pointer: " << *ptr << std::endl;

    // 3. Address of array elements:
    // Using & to get the address of a specific array element.
    int* ptrToSecondElement = &numbers[1];
    std::cout << "Second element using pointer: " << *ptrToSecondElement << std::endl;

    // 4. Reference to an array element:
    int& refToThirdElement = numbers[2];
    std::cout << "Third element using reference: " << refToThirdElement << std::endl;

    // 5. Iterating through array using pointers:
    std::cout << "Array elements using pointer arithmetic iteration:" << std::endl;
    for (int* iterPtr = numbers; iterPtr < (numbers + 5); iterPtr++) {
        std::cout << *iterPtr << " ";  // Dereferencing the pointer to get the value
    }
    std::cout << std::endl;

    // 6. Using array with pointer arithmetic:
    int* ptrToEnd = numbers + 5;  // Pointing just past the last element
    ptrToEnd--;  // Move the pointer back to the last element
    std::cout << "Last element using pointer arithmetic: " << *ptrToEnd << std::endl;

    // Note:
    // - Arrays in C++ are closely related to pointers. The array name without an index or the '&' operator 
    //   behaves like a pointer to the first element.
    // - Pointers can be used to iterate through the array, modify elements, and achieve various other tasks 
    //   that you'd normally use array indices for.

    return 0;
}