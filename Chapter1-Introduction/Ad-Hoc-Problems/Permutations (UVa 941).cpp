//
// Created by Stephen Ni on 2023-10-15.
//

// Link to the Problem: https://onlinejudge.org/external/9/941.pdf

// Find the n-th permutation of a string, simple formula exists

#include<iostream>
#include<string>
#include<algorithm> // rearranges the element in the range [first, last) into the next lexicographically greater permutation
#include<vector>

std::string findNthPermutation(std::string s, int n) {
    std::string sorted = s;
    std::sort(sorted.begin(), sorted.end());

    for (int i = 0; i < n; i++) {
        std::next_permutation(sorted.begin(), sorted.end());
    }

    return sorted;
}

int main() {
    std::vector<std::string> output;

    int samples;
    std::cin >> samples;

    for(int i = 0; i < samples; i++) {
        std::string S;
        int N;

        std::cin >> S;
        std::cin >> N;

        std::string result = findNthPermutation(S, N);

        output.push_back(result);
    }

    for(std::string i : output) {
        std::cout << i << std::endl;
    }


    return 0;
}