#include <cassert>
#include <iostream>

#include "examples_variables.h"
#include "utility.h"

int main()
{
    std::cout << "Hello, World!" << std::endl;
    std::cout << "---" << std::endl;
    std::cout << "Welcome to Module 1!" << std::endl;
    std::cout << "---" << std::endl;

    std::cout << "Here is a Bubble Sort!" << std::endl;
    std::vector<int> arr = { 6, 5, 3, 1, 8, 7, 2, 4 };
    print_vector(arr);
    bubble_sort(arr);
    std::cout << "Sorted array: " << std::endl;;
    print_vector(arr);
    std::cout << "---" << std::endl;

    std::cout << "Fibonacci!" << std::endl;
    assert("fibonacci 20 should be 6765" && (fibonacci(20) == 6765));
    int fibNumber = 0;
    //std::cout << "Enter a number: ";
    //std::cin >> fibNumber;
    std::cout << "Fibonacci " << fibNumber << " = " << fibonacci(fibNumber) << std::endl;;
    std::cout << "---" << std::endl;

    std::cout << "Let's study variables " << std::endl;
    examples_variables_01();
    std::cout << "---" << std::endl;
    examples_variables_02();
    std::cout << "---" << std::endl;
    examples_variables_03();
    std::cout << "---" << std::endl;
    examples_variables_04();
    std::cout << "---" << std::endl;
    examples_variables_05();
    std::cout << "---" << std::endl;
    examples_variables_06();
    std::cout << "---" << std::endl;
    examples_variables_07();
    std::cout << "---" << std::endl;
    examples_variables_08();
    std::cout << "---" << std::endl;
    examples_variables_09();
    std::cout << "---" << std::endl;
    examples_variables_10();
    std::cout << "---" << std::endl;
    examples_variables_11();
    std::cout << "---" << std::endl;
    examples_variables_12();
    std::cout << "---" << std::endl;
    examples_variables_13();
    std::cout << "---" << std::endl;
    examples_variables_14();
    std::cout << "---" << std::endl;
    //exercise_variables_01();
    return 0;
}
