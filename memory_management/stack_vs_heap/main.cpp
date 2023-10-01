// Lesson: Stack vs. Heap in C++

#include <iostream>

void allocateOnStack(int size) {
    // 1. Stack Allocation:
    // Fixed size, determined at compile-time.
    int stackArray[10];
    std::cout << "Address of stackArray: " << &stackArray << std::endl;
}

void allocateOnHeap(int size) {
    // 2. Heap Allocation:
    // Dynamic size, determined at runtime.
    int* heapArray = new int[size];
    std::cout << "Address of heapArray: " << heapArray << std::endl;
    
    // Important: Memory allocated on the heap must be manually deallocated.
    delete[] heapArray;
}

int main() {
    // The stack is a region of memory where local variables are stored.
    // It grows and shrinks automatically as functions push and pop data.
    // The heap is a region of memory used for dynamic memory allocation.
    // It must be managed manually: memory must be allocated and deallocated.

    allocateOnStack(10);

    allocateOnHeap(10);

    // 3. Memory Allocation Speed:
    // Stack: Fast. Memory allocation involves adjusting the stack pointer.
    // Heap: Slower. Memory allocation involves finding a block of memory, and there's more overhead.

    // 4. Lifetime:
    // Stack: Variables automatically deallocated when they go out of scope.
    // Heap: Variables stay until they're explicitly deallocated or the program ends.

    // 5. Size Limit:
    // Stack: Limited in size, determined by OS (commonly 1-8 MB).
    // Heap: Larger and limited by system's available memory.

    // Note:
    // - Use the stack for small, fixed-size variables.
    // - Use the heap for large or dynamically-sized data.

    return 0;
}