//
// Created by Yannick Francillette on 2024-12-19.
//

#ifndef UTILITY_H
#define UTILITY_H

#include <string>
#include <vector>

void bubble_sort(int *array, int length);
void bubble_sort(std::vector<int> &array);

void print_vector(const std::vector<int> &vector);

int fibonacci(int n);

void trace(std::string name, long var);
template <typename T>
void transform(std::string name, T var);

#endif //UTILITY_H
