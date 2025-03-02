//
// Created by Yannick Francillette on 2024-11-24.
//

#include "examples_variables.h"

#include <cassert>
#include <iostream>

#include <limits>

#include "utility.h"

void examples_variables_00() {
    std::cout << "examples_variables_00" << std::endl;
    std::cout << "This code does not compile if the comments below are removed" << std::endl;
    //if (false)
    //    int variable = "Hello " + 3;
}


// function to study size of types in memory
void examples_variables_01() {
    std::cout << std::endl << "examples_variables_01" << std::endl;
    std::cout << std::endl << "Prints the size of different types in c++ in bytes" << std::endl;
    // Calculate and Print the size of integer type
    std::cout << "Size of int is: " << sizeof(int) << " bytes" << std::endl;
    // Calculate and Print the size of unsigned integer type
    std::cout << "Size of unsigned int is: " << sizeof(unsigned int) << " bytes" <<  std::endl;
    // Calculate and Print the size of float type
    std::cout << "Size of float is: " << sizeof(float) << " bytes" <<  std::endl;
    // Calculate and Print the size of double type
    std::cout << "Size of double is: " << sizeof(double) << " bytes" <<  std::endl;
    // Calculate and Print the size of short type
    std::cout << "Size of short is: " << sizeof(short) << " bytes" <<  std::endl;
    // Calculate and Print the size of long type
    std::cout << "Size of long is: " << sizeof(long) << " bytes" <<  std::endl;
    // Calculate and Print the size of char type
    std::cout << "Size of char is: " << sizeof(char) << std::endl;
}

// function to study the maximum value of each types
void examples_variables_02() {
    std::cout << std::endl << "examples_variables_02" << std::endl;
    std::cout << std::endl << "Prints the maximum value that can be stored for some type in C++" << std::endl;
    std::cout << "Maximum int: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Maximum unsigned int: " << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "Maximum long: " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "Maximum unsigned long: " << std::numeric_limits<unsigned long>::max() << std::endl;
    std::cout << "Maximum float: " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "Maximum double: " << std::numeric_limits<double>::max() << std::endl;
}

void examples_variables_03() {
    std::cout << std::endl << "examples_variables_03" << std::endl;
    std::cout << std::endl << "Maximum values and overflow" << std::endl;
    int integer = std::numeric_limits<int>::max();
    std::cout << "integer with maximum int: " << integer << std::endl;
    integer++;
    std::cout << "integer with maximum int + 1: " << integer << std::endl;
    integer = std::numeric_limits<long>::max();
    std::cout << "integer with maximum long: " << integer << std::endl;
    unsigned short unsigned_integer = std::numeric_limits<unsigned short>::max();
    std::cout << "unsigned short: " << unsigned_integer << std::endl;
    unsigned_integer = std::numeric_limits<long>::max();
    std::cout << unsigned_integer << std::endl;
}

void examples_variables_04() {
    std::cout << std::endl << "examples_variables_04" << std::endl;
    std::cout << std::endl << "Character convertion in integer" << std::endl;
    int integer = 59;
    char character = integer;
    std::cout << character << std::endl;
    character = 'a';
    integer = character;
    std::cout << integer << std::endl;
}

void examples_variables_05() {
    std::cout << std::endl << "examples_variables_05" << std::endl;
    std::cout << std::endl << "Binary convertion in integer" << std::endl;
    int bin;        // assume 16-bit ints
    bin = 0b1;
    bin = 0b11110000; // assign binary 0000 0000 1111 0000 to the variable
    std::cout << bin << std::endl;
}

void examples_variables_06() {
    //Since C++14 we can use a quotation mark (‘) as a digit separator.
    std::cout << std::endl << "examples_variables_06" << std::endl;
    long integer = 2'132'673'462 ; // much easier to read than 2132673462
    std::cout << integer << std::endl;
}

void examples_variables_07() {
    std::cout << std::endl << "examples_variables_07" << std::endl;
    std::cout << std::endl << "Number convertion in binary" << std::endl;
    int integer = 5;
    std::cout << std::format("{:b}\n", integer);  // C++20, {:b} formats the argument as binary digits
    std::cout << std::format("{:#b}\n", integer); // C++20, {:#b} formats the argument as 0b-prefixed binary digits
}

void examples_variables_08() {
    std::cout << std::endl << "examples_variables_08" << std::endl;
    std::cout << std::endl << "Number and character convertion in binary" << std::endl;
    int integer = 5;
    trace("integer", integer);
    integer++;
    trace("integer", integer);
    integer = 'c';
    trace("integer", integer);
}

void examples_variables_09() {
    std::cout << std::endl << "examples_variables_09" << std::endl;
    std::cout << std::endl << "Size of data type in memory" << std::endl;
    // Calculate and Print the size of unsigned integer type
    std::cout << "Size of uint32_t is: " << sizeof(uint32_t) << " bytes" <<  std::endl;
    // Calculate and Print the size of unsigned integer type
    std::cout << "Size of unsigned int is: " << sizeof(unsigned int) << " bytes" <<  std::endl;
    // Calculate and Print the size of unsigned integer type
    std::cout << "Size of uint32_t is: " << sizeof(uint16_t) << " bytes" <<  std::endl;
}

void examples_variables_10() {
    std::cout << std::endl << "examples_variables_10" << std::endl;
    std::cout << std::endl << "Implicit type conversion" << std::endl;
    int number = 0;
    char character = 'a'; // implicitly converted to integer. ASCII value of character 'a' is 97
    number = character;
    std::cout << "number = " << number << std::endl
    << "character = " << character << std::endl;
    number = 7 + character;
    std::cout << "number = " << number << std::endl;
    // number is implicitly converted to float
    float decimal_number = number + 10.0;
    std::cout << "decimal_number = " << decimal_number << std::endl;
}

void examples_variables_11() {
    std::cout << std::endl << "examples_variables_11" << std::endl;
    std::cout << std::endl << "Explicit C type conversion" << std::endl;
    double decimal_number = 1.5;
    int number = (int)decimal_number + 1; // Explicit conversion from double to int
    std::cout << "number: " << number << std::endl
    << "decimal_number: " << decimal_number << std::endl;
    number = 1;
    decimal_number = decimal_number + (double)number; // Explicit conversion from int to double
    std::cout << "decimal_number: " << decimal_number << std::endl;
}

void examples_variables_12() {
    std::cout << std::endl << "examples_variables_12" << std::endl;
    std::cout << std::endl << "Explicit C++ static type conversion" << std::endl;
    double decimal_number = 1.5;
    int number = static_cast<int>(decimal_number + 1); // Explicit conversion from double to int
    std::cout << "number: " << number << std::endl
        << "decimal_number: " << decimal_number << std::endl;
    number = 1;
    decimal_number = decimal_number + static_cast<double>(number); // Explicit conversion from int to double
    std::cout << "decimal_number: " << decimal_number << std::endl;
}

void examples_variables_13() {
    std::cout << std::endl << "examples_variables_13" << std::endl;
    std::cout << std::endl << "Explicit type conversion compilation error" << std::endl;
    std::string text = "Hello World!";
    // int entier = (int)text; // Invalid
}

void examples_variables_14() {
    std::cout << std::endl << "examples_variables_14" << std::endl;
    std::cout << std::endl << "Explicit type conversion execution error" << std::endl;
    long long_integer = std::numeric_limits<long>::max();
    int number = (int)long_integer; // Conversion explicite

    std::cout << "Long integer: " << long_integer << std::endl;
    std::cout << "After conversion: " << number << std::endl; // The conversion led to an overflow

}

void exercise_variables_01() {
    std::cout << std::endl << "exercise_variables_01" << std::endl;
    int integer = std::numeric_limits<int>::max();
    int integer2; // exercise how to initialize ?
    assert("initialize integer2. integer+integer2 should be 0" && (integer+integer2) == 0);
    std::cout << std::endl << "end of exercise_variables_01" << std::endl;
}


