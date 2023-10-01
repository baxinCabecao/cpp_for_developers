#include <iostream>

int main()
{
    // ----- SELECTION STATEMENTS -----

    // 1. if statement
    int a = 5;
    if (a > 3)
    {
        std::cout << "a is greater than 3" << std::endl;
    }

    // 2. if-else statement
    int number = 7;
    if (number % 2 == 0)
    {
        std::cout << "number is even" << std::endl;
    }
    else
    {
        std::cout << "number is odd" << std::endl;
    }

    // 3. if-else if-else ladder
    int score = 85;
    if (score > 90)
    {
        std::cout << "Grade: A" << std::endl;
    }
    else if (score > 80)
    {
        std::cout << "Grade: B" << std::endl;
    }
    else if (score > 70)
    {
        std::cout << "Grade: C" << std::endl;
    }
    else
    {
        std::cout << "Grade: F" << std::endl;
    }

    // 4. switch statement
    int day = 3; // Let's assume 1 is Monday, 2 is Tuesday, and so on.
    switch (day)
    {
    case 1:
        std::cout << "Monday" << std::endl;
        break;
    case 2:
        std::cout << "Tuesday" << std::endl;
        break;
    case 3:
        std::cout << "Wednesday" << std::endl;
        break;
    default:
        std::cout << "Another day" << std::endl;
    }

    // ----- ITERATION STATEMENTS -----

    // 1. for loop
    for (int i = 0; i < 3; ++i)
    {
        std::cout << "Iteration " << i << " of for loop" << std::endl;
    }

    // 2. while loop
    int counter = 0;
    while (counter < 3)
    {
        std::cout << "Iteration " << counter << " of while loop" << std::endl;
        counter++;
    }

    // 3. do-while loop
    counter = 0;
    do
    {
        std::cout << "Iteration " << counter << " of do-while loop" << std::endl;
        counter++;
    } while (counter < 3);

    // 4. Range-based for loop (requires C++11)
    int array[] = {1, 2, 3};
    for (const int val : array)
    {
        std::cout << "Array value: " << val << std::endl;
    }

    return 0;
}