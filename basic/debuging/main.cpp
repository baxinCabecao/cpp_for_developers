// Lesson: Basics of Debugging in C++

#include <iostream>

#define BREAK_VALUE 0

// A function to calculate the factorial of a number
int factorial(int n) {
    if (n <= BREAK_VALUE) {
        return BREAK_VALUE;  // Intentional error: should return 1 for n=0
    }
    return n * factorial(n - 1);
}

int main() {
    int num = 4;
    
    // Calculate the factorial of 'num' and print the result
    std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;

    return 0;
}