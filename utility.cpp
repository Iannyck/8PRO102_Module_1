//
// Created by Yannick Francillette on 2024-12-19.
//

#include "utility.h"

#include <iostream>
#include <ostream>

void bubble_sort(int *array, int length) {
    bool swapped = false;
    for (size_t i = 0; i < length - 1; i++) {
        swapped = false;
        for (size_t j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                std::swap(array[j], array[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            return;
    }
}

void bubble_sort(std::vector<int> &array) {
    bool swapped = false;
    const size_t length = array.size();
    for (size_t i = 0; i < length - 1; i++) {
        swapped = false;
        for (size_t j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                std::swap(array[j], array[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            return;
    }
}

void print_vector(const std::vector<int> &vector) {
    for (const int item : vector)
        std::cout << " [" << item << "] ";
    std::cout << std::endl;
}

int fibonacci(int n) {
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else {
        int a, b;
        for(a = b = 1;; --n) {
            if(n<=2) return b;
            b+=a;
            a = b - a;
        }
    }
}

void trace(const std::string name, long var) {
    std::cout << "[" << name << "]: " << var << " "
    << std::format("{:b}\n", var) << std::endl;
}

