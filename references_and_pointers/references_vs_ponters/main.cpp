// Lesson: Pointers vs. References in C++

#include <iostream>

// Function to demonstrate the use of references as function arguments for modification
void incrementByTenReference(int& ref) {
    ref += 10;
}

// Function to demonstrate the use of pointers as function arguments for modification
void incrementByTenPointer(int* ptr) {
    if (ptr) { // Always check for nullptr before dereferencing
        *ptr += 10;
    }
}

int main() {
    int value = 10;

    // 1. Basic Usage:
    // Reference: Acts as an alias for the variable. Must be initialized during declaration.
    int& ref = value;

    // Pointer: Stores the memory address of a variable. Can be re-assigned & can be null.
    int* ptr = &value;

    std::cout << "Value: " << value << ", Reference: " << ref << ", Dereferenced Pointer: " << *ptr << std::endl;

    // 2. Modifying through function:
    incrementByTenReference(ref);  // Using reference
    std::cout << "After incrementByTenReference: " << value << std::endl;

    incrementByTenPointer(ptr);  // Using pointer
    std::cout << "After incrementByTenPointer: " << value << std::endl;

    // 3. Nullability:
    // References are not nullable, and they always refer to a valid object.
    // Pointers can be null.
    ptr = nullptr;

    // 4. Re-assignment:
    int anotherValue = 50;
    ptr = &anotherValue;  // Pointers can be re-assigned to address another variable.
    // Uncommenting the next line would result in a compilation error.
    // ref = anotherValue;  // Not re-assigning the reference, but assigning the value.

    std::cout << "Another Value through Pointer: " << *ptr << std::endl;

    // Note:
    // Use references when:
    // - You want to provide a clear indication that the object shouldn't be null.
    // - You don't need to re-assign the reference to another object.
    // Use pointers when:
    // - You need the ability to re-assign or you want to work with dynamic memory.
    // - You want to indicate that the object being pointed to might not exist (nullptr).

    return 0;
}