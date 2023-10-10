//
// Created by Stephen Ni on 2023-10-09.
//

// Link to the Problem: https://dmoj.ca/problem/collatz

#include <iostream>

int CollatzConjecture(int i) {
    int count = 0;

    while (i != 1) {
        if ((i % 2) == 0) {
            i /= 2;
            count++;
        }
        else {
            i *= 3;
            i++;
            count++;
        }
    }

    return count;
}

int main() {
    int i;
    std::cin >> i;

    int result = CollatzConjecture(i);
    std::cout << result;
    return 0;
}