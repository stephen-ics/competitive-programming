//
// Created by Stephen Ni on 2023-10-09.
//

// Link to the Problem: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=330

// array manipulation problem

#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>

int main() {
    int n, k;

    std::cin >> n >> k;

    std::unordered_map<std::string, std::vector<int> > cMap;
    std::vector<std::string> outputVector;

    // defining all vectors and performing all necessary calculations on C's
    for(int i = 0; i < n; i++) {
        std::string name;
        int base;
        int byteSize;
        int dimensions;

        std::cin >> name >> base >> byteSize >> dimensions;

        std::vector<int> upperBoundVector;
        std::vector<int> lowerBoundVector;
        std::vector<int> cValues;

        for(int j = 0; j < dimensions; j++) {
            int lowerBound;
            int upperBound;

            std::cin >> lowerBound;
            std::cin >> upperBound;

            lowerBoundVector.push_back(lowerBound);
            upperBoundVector.push_back(upperBound);
        }

        // pushing cD
        cValues.push_back(byteSize);

        // we do not have to use recursion here, because we know the number of operations
        // furthermore! we keep using push_back that adds an element to the end of a list
        // therefore to access the latest element we can always use the [length - 1]th index

        std::size_t upperSize = upperBoundVector.size();
        std::size_t lowerSize = lowerBoundVector.size();

        // calculating cd
        for (int j = 0; j < dimensions-1; j++) {
            std::size_t cSize = cValues.size();

            int c = cValues[cSize-1]*(upperBoundVector[upperSize - j - 1] - lowerBoundVector[lowerSize - j - 1] + 1);
            cValues.push_back(c);
        }

        // calculating c0
        int c0 = base;
        for (int j = 0; j < dimensions; j++) {
            c0 -= (cValues[dimensions - j - 1] * lowerBoundVector[j]);
        }

        cValues.push_back(c0);

        cMap[name] = cValues;
    }

    // calculating physical addresses for each reference
    for(int i = 0; i < k; i++) {
        std::string name;
        std::cin >> name;

        std::vector<int> cValues = cMap[name];
        std::size_t dimensions = cValues.size() - 1;

        std::vector<int> references;

        for(int j = 0; j < dimensions; j++) {
            int index;
            std::cin >> index;

            references.push_back(index);
        }

        int c = cValues[dimensions];
        int physicalAddress = c;

        for (int j = 0; j < dimensions; j++) {
            // skip [dimensions-0-1]
            physicalAddress += (cValues[dimensions - j - 1] * references[j]);
        }

        std::string output = name;
        output += "[" + std::to_string(references[0]);

        for(int j = 1; j < dimensions; j++) {
            output += ", ";
            output += std::to_string(references[j]);
        }

        output += "] = " + std::to_string(physicalAddress);

        outputVector.push_back(output);

        // cValues [2, 10, 1498] -> [c2, c1]
        // index [2, 4] -> [i1, i2]
        // 1498 + (2 * 10) + (2 * 4)
    }

    for(std::string output : outputVector) {
        std::cout << output << std::endl;
    }

    return 0;
}

// input
// n: number of arrays
// r: number of array references

// next N lines define an array
// name of the array
// B: a positive integer that specifies the base address
// CD: a positive integer that specifies the byte size of each array element
// D: the number of dimensions in the array ( 1 <= D <= 10)
// D pairs of integer which represent the upper and lower bounds of each Dimension of the array

// next R line specifies an array reference
// name of the array
// integer of the indexes i1, i2, ... iD, where D is the dimension of the array

// Physical address of an array reference A[i1] is calculated by C0 + C1i1
// Cd = Cd+1(Ud+1 - Ld+1) for 1 <= d <