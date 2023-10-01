// This is a single-line comment in C++

/*
   This is a multi-line comment in C++
   It can span several lines.
*/

// The '#include' directive is used to include headers.
#include <iostream>

// 'using namespace' tells the compiler to use names from the specified namespace without prefixing.
using namespace std; // Use the standard namespace. It contains common functions like 'cout'.

// Function
void foo() {
    cout << "From foo function." << endl;
}

int main()
{
    // The curly braces '{}' define a scope. In this case, they define the body of the 'main' function.

    cout << "Hello, World!" << std::endl; // 'cout' is used to output to the console.
                                          // '<<' is the insertion operator.
                                          // 'endl' is an end-of-line character.

    int x = 5; // Declare an integer variable named 'x' and assign it a value of 5.

    int a, b;
    a = 3;
    b = 4;

    if (x > 3)
    { // 'if' is a conditional statement. The condition inside '()' is evaluated.
        // If the condition is true, the code inside the following '{}' is executed.
        cout << "x is greater than 3" << endl;
    }

    for (int i = 0; i < 3; i++)
    {                                            // A 'for' loop. It has three parts: initialization, condition, and iteration.
        cout << "Loop iteration: " << i << endl; // Display the value of 'i' in each iteration.
    }

    // Every statement in C++ ends with a semicolon ';'. It signifies the end of a command.

    foo();
    return 0;
}