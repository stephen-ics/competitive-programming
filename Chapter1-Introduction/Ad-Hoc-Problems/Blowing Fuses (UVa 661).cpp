//
// Created by Stephen Ni on 2023-10-12.
//

// Link to the Problem: https://onlinejudge.org/external/6/661.pdf

// simulation problem

#include<iostream>
#include<string>
#include<vector>

int main() {

    int n, m, c;
    std::cin >> n >> m >> c;

    std::vector<std::string> output;

    int sequence = 1;

    while ((n != 0) && (m != 0) && (c != 0)) {
        std::vector<int> devices;
        std::vector<bool> on(n, false);

        for(int i = 0; i < n; i++) {
            int device;
            std::cin >> device;

            devices.push_back(device);
        }

        int maxPower = 0;
        int sum = 0;

        for(int i = 0; i < m; i++) {
            int operation;
            std::cin >> operation;

            if(on[operation-1]) {
                on[operation-1] = false;
            } else {
                on[operation-1] = true;
            }

            for(int j = 0; j < n; j++) {
                if (on[j]) {
                    sum += devices[j];
                }
            }

            if (sum > maxPower) {
                maxPower = sum;
            }

            sum = 0;
        }

        int finalSum = 0;
        for(int i = 0; i < n; i++) {
            if (on[i]) {
                finalSum += devices[i];
            }
        }

        if (finalSum > c) {
            output.push_back("Sequence " + std::to_string(sequence) + "\n");
            output.push_back("Fuse was blown.\n\n");
        } else {
            output.push_back("Sequence " + std::to_string(sequence) + "\n");
            output.push_back("Fuse was not blown.\n");
            output.push_back("Maximal power consumption was " + std::to_string(maxPower) + " amperes.\n\n");
        }

        sequence += 1;
        std::cin >> n >> m >> c;
    }

    for(std::string result : output) {
        std::cout << result;
    }

    return 0;
}