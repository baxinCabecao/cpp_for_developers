// Lesson: Macros in C++

#include <iostream>

// 1. Basic macro definition - bad use
// Defines a macro named PI with the value 3.14159
#define PI 3.14159

// 2. Macro with parameters
// This macro calculates the area of a circle given its radius.
#define AREA_CIRCLE(radius) (PI * (radius) * (radius))

// 3. Conditional compilation using macros
// This can be used to include/exclude parts of the code based on certain conditions.
#ifdef PI
    #define CIRCLE_INFO "The program is using the PI macro."
#else
    #define CIRCLE_INFO "The program is NOT using the PI macro."
#endif

// 4. #undef directive
// This allows you to undefine a macro.
// Uncommenting the following line will result in a compilation error in the next usage of PI.
// #undef PI

int main() {
    double radius = 2.0;

    // Use our macros
    std::cout << "Using macros:" << std::endl;
    std::cout << CIRCLE_INFO << std::endl;
    std::cout << "Area of a circle with radius " << radius << " is: " << AREA_CIRCLE(radius) << std::endl;

    return 0;
}