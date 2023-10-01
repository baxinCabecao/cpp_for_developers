// Lesson: Pointers in C++

#include <iostream>

// 5. Function argument as a pointer
// Increases the pointed value by 10.
void incrementByTen(int* ptr) {
    *ptr += 10;
}

// 6. Function returning a pointer.
int* getPointer(int* input) {
    return input;
}

int main() {
    // 1. Basic pointer declaration and initialization
    int original = 10;
    int* pointerToOriginal = &original;

    // 2. Accessing the value through a pointer using dereference operator (*)
    std::cout << "Original: " << original << ", Dereferenced Pointer: " << *pointerToOriginal << std::endl;

    std::cout << "When you try print a pointer no dereferencing it: " << pointerToOriginal << std::endl;
    

    // 3. Modifying the value through a pointer
    *pointerToOriginal = 20;
    std::cout << "After modifying via pointer, Original: " << original << std::endl;

    incrementByTen(&original);
    std::cout << "After incrementByTen function, Original: " << original << std::endl;

    *getPointer(&original) = 50;
    std::cout << "After using getPointer function, Original: " << original << std::endl;

    // 7. Pointers can be assigned a special value named nullptr, which means they don't point to any memory location.
    pointerToOriginal = nullptr;

    // Note: Remember that accessing the value at a nullptr will result in undefined behavior.
    // *pointerToOriginal = 1;

    return 0;
}