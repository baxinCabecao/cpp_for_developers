// This program introduces the basic concept of arrays in C++.

#include <iostream>  // Needed to use the cout and cin functions.

int main() {
    // Declaring an array of integers with a size of 5.
    int numbers[5];

    // Assigning values to the array.
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // Arrays in C++ are 0-indexed. So, the first element is at index 0.
    std::cout << "First element: " << numbers[0] << std::endl;
    
    // Accessing and printing the third element.
    std::cout << "Third element: " << numbers[2] << std::endl;

    // Arrays have a fixed size. Once declared, you cannot change their size.
    // In this case, our array has a size of 5.

    // Iterating over the array using a for loop.
    std::cout << "All elements:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << numbers[i] << std::endl;
    }

    // Arrays can be initialized during declaration.
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    
    // The size of the array(number of elements) can be found using the sizeof operator.
    int arraySize = sizeof(vowels) * sizeof(vowels[0]);
    std::cout << "Size of vowels array: " << arraySize << std::endl;

    return 0;  // Indicating successful completion.
}