//
// Created by Stephen Ni on 2023-10-09.
//

// Link to the Problem: https://onlinejudge.org/external/2/272.pdf

#import <iostream>
#import <string>

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    bool first = true;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == '\"') {
            if (first) {
                sentence.replace(i, 1, "``");
                first = false;
            } else {
                sentence.replace(i, 1, "''");
                first = true;

            }
        }
    }

    std::cout << sentence;
    return 0;
}