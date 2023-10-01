#include <iostream>

int main() {
    // ----- UNINITIALIZED VARIABLES -----

    // Using an uninitialized local variable
    int uninitializedVar;
    std::cout << "Value of uninitialized variable: " << uninitializedVar << std::endl;  // The value might be garbage data.

    // This could lead to unpredictable behavior in your program, as the variable might hold any value present at that memory location.

    // Division by zero
    int x = 5, y = 0;
    int result = x / y;
    // Uncommenting above will lead to undefined behavior as division by zero is not allowed.

    return 0;
}





