//
// Created by Stephen Ni on 2023-10-09.
//

// Link to the Problem: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=208

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