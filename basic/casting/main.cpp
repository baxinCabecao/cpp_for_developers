// Casting in C++

#include <iostream>

int main() {
    // 1. C-style casting (Old way)
    // This method is inherited from C. It's straightforward but can sometimes be unsafe.
    double oldPi = 3.14159;
    int oldIntPi = (int)oldPi;  
    std::cout << "C-style cast: " << oldPi << " becomes " << oldIntPi << std::endl;

    // 2. Static Cast
    // A safer and more expressive method of casting in C++. 
    // It performs conversions between types with validation at compile-time.
    double newPi = 3.14159;
    int newIntPi = static_cast<int>(newPi);  
    std::cout << "Static cast: " << newPi << " becomes " << newIntPi << std::endl;

    int b = 3.14159;
    std::cout << "Static cast: " << newPi << " becomes " << b << std::endl;

    // 3. Const Cast
    // const_cast is used to modify the const qualification of a variable.
    const int x = 10;
    int* ptr = const_cast<int*>(&x);  // Casting away const-ness.
    // Note: Modifying a value that was originally declared const is undefined behavior.
    // This is just to demonstrate the usage of const_cast.
    //*ptr = 20;  
    std::cout << "Original const value: " << x << ", value after using const_cast: " << *ptr << std::endl;

    // 4. Reinterpret Cast
    // Used for low-level, potentially unsafe conversions.
    // Typically used for pointer conversions.
    int y = 65;
    char* charPtr = reinterpret_cast<char*>(&y);
    std::cout << "Reinterpret cast: " << y << " as char becomes " << *charPtr << std::endl;
    
    return 0;
}