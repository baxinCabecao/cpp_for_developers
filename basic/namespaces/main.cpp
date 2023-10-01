// Lesson: Namespaces in C++

#include <iostream>

// 1. Define a simple namespace named 'alpha'.
namespace alpha {
    int value = 10;

    void display() {
        std::cout << "Inside alpha namespace. Value: " << value << std::endl;
    }
}

// 2. Another namespace named 'beta'.
namespace beta {
    int value = 20;

    void display() {
        std::cout << "Inside beta namespace. Value: " << value << std::endl;
    }
}

// 3. Nested namespace. Namespaces can be nested within other namespaces.
namespace zeta {
    namespace delta {
        int value = 30;
    }
}

int main() {
    // 4. Accessing members of a namespace using the scope resolution operator (::).
    alpha::display();
    beta::display();

    // Accessing the nested namespace.
    std::cout << "Inside zeta::delta namespace. Value: " << zeta::delta::value << std::endl;

    // 5. Using directive: 'using namespace'.
    // This allows for unqualified access to a namespace's members.
    // Note: It's generally not recommended to use 'using namespace' at a global scope, especially for the 'std' namespace, 
    // to avoid potential naming conflicts.
    using namespace alpha;
    display();  // This will call alpha::display() because of the using directive above.
    using namespace beta;
    // display(); //call of overloaded ‘display()’ is ambiguous

    return 0;
}