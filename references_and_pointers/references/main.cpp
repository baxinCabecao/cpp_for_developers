// Lesson: References in C++

#include <iostream>

// 5. Function argument as a reference
// Increases the passed value by 10.
void incrementByTen(int& val) {
    val += 10;
}

// 6. Function returning a reference. Can be used to change a value outside the function.
int& getReference(int& input) {
    return input;
}

// 7. Function receive a copy, so the original value is unchanged.
void passByValue(int val) {
    val += 1000;
}

int main() {
    // 1. Basic reference declaration and initialization
    int original = 10;
    int& referenceToOriginal = original;

    // 2. References must be initialized at the point of declaration.
    // The following line would result in a compilation error.
    // int& uninitializedReference;

    std::cout << "Original: " << original << ", Reference: " << referenceToOriginal << std::endl;

    // 3. Modifying the reference modifies the original value.
    referenceToOriginal = 20;
    std::cout << "After modifying reference, Original: " << original << std::endl;

    // 4. Reference to const. This cannot be used to modify the original value.
    const int& constReference = original;
    // Uncommenting the next line would result in a compilation error.
    // constReference = 30;

    incrementByTen(original);
    std::cout << "After incrementByTen function, Original: " << original << std::endl;

    getReference(original) = 50;
    std::cout << "After using getReference function, Original: " << original << std::endl;

    passByValue(original);
    std::cout << "After using passByValue function, Original: " << original << std::endl;

    // Note: Remember that a reference is just another name for an already existing variable. It's not a new storage location.

    return 0;
}