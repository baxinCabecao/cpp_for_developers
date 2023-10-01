// Include necessary headers.
#include <iostream>
#include <limits> // This header provides information about data types.

using namespace std;

int main()
{

    // C++ offers several basic built-in data types.

    // **Integer types**

    int integerVar = 10;
    cout << "int size: " << sizeof(integerVar) << " bytes." << endl;
    cout << "int max value: " << numeric_limits<int>::max() << endl;
    cout << "int min value: " << numeric_limits<int>::min() << endl;

    short shortVar = 32000; // Declare a short integer.
    cout << "short size: " << sizeof(shortVar) << " bytes." << endl;
    cout << "short max value: " << numeric_limits<short>::max() << endl;
    cout << "short min value: " << numeric_limits<short>::min() << endl;

    long longVar = 100000000L; // Declare a long integer.
    cout << "long size: " << sizeof(longVar) << " bytes." << endl;
    cout << "long max value: " << numeric_limits<long>::max() << endl;
    cout << "long min value: " << numeric_limits<long>::min() << endl;

    long long longLongVar = 10000000000000000LL; // Declare a long long integer.
    cout << "long long size: " << sizeof(longLongVar) << " bytes." << endl;
    cout << "long long max value: " << numeric_limits<long long>::max() << endl;
    cout << "long long min value: " << numeric_limits<long long>::min() << endl;

    unsigned int unsignedIntVar = 4000000000U; // Declare an unsigned integer.
    cout << "unsigned int size: " << sizeof(unsignedIntVar) << " bytes." << endl;
    cout << "unsigned int max value: " << numeric_limits<unsigned int>::max() << endl;
    cout << "unsigned int min value: 0 (unsigned always non-negative)" << endl;

    // **Floating point types**

    float floatVar = 3.14f; // Declare a floating-point variable.
    cout << "float size: " << sizeof(floatVar) << " bytes." << endl;
    cout << "float max value: " << numeric_limits<float>::max() << endl;
    cout << "float min value: " << numeric_limits<float>::min() << endl;

    double doubleVar = 3.141592653589793; // 'double' is like 'float' but with double the precision.
    cout << "double size: " << sizeof(doubleVar) << " bytes." << endl;

    // **Character type**

    char charVar = 'A'; // Declare a character variable.
    cout << "char size: " << sizeof(charVar) << " bytes." << endl;
    cout << "char max value: " << (int)numeric_limits<char>::max() << endl; // Cast char to int for display.
    cout << "char min value: " << (int)numeric_limits<char>::min() << endl;

    unsigned char unsignedCharVar = 'A'; // Declare a character variable.
    cout << "unsigned char size: " << sizeof(unsignedCharVar) << " bytes." << endl;
    cout << "unsigned char max value: " << (int)numeric_limits<unsigned char>::max() << endl; // Cast char to int for display.
    cout << "unsigned char min value: " << (int)numeric_limits<unsigned char>::min() << endl;

    // **Boolean type**

    bool boolVar = true; // Declare a boolean variable. It can be 'true' or 'false'.
    cout << "bool size: " << sizeof(boolVar) << " bytes." << endl;

    // **Void type**

    // The 'void' type represents the absence of value. Commonly used with functions to indicate no return value.
    // Can't declare a variable of type 'void'.

    // **Wide character type**

    wchar_t wideCharVar = L'A'; // Declare a wide character. It's larger than 'char' and can represent more characters.
    cout << "wchar_t size: " << sizeof(wideCharVar) << " bytes." << endl;

    int const foo = 0;
    const int bar = 1;

    return 0;
}