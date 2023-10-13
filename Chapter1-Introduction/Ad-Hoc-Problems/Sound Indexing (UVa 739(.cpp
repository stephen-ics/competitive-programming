//
// Created by Stephen Ni on 2023-10-12.
//

// Link to the Problem: https://onlinejudge.org/external/7/739.pdf

// straightforward conversion problem

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

std::string calculateSoundex(std::string name) {
    int nameLength = name.length();
    std::string space = "         ";

    std::vector<char> charVector;
    char firstLetter = name[0];

    charVector.push_back(firstLetter);

    for(int i = 0; i < nameLength; i++) {
        char letter = name[i];

        if ((letter != 'A') && (letter != 'E') && (letter != 'I') && (letter != 'O') && (letter != 'U') && (letter != 'Y') && (letter != 'W') && (letter != 'H')) {
            if ((letter == 'B') || (letter == 'P') || (letter == 'F') || (letter == 'V')) {
                if (charVector[charVector.size()-1] != '1') {
                    charVector.push_back('1');
                }
            } else if ((letter == 'C') || (letter == 'S') || (letter == 'K') || (letter == 'G') || (letter == 'J') || (letter == 'Q') || (letter == 'X') || (letter == 'Z')) {
                if (charVector[charVector.size()-1] != '2') {
                    charVector.push_back('2');
                }
            } else if ((letter == 'D') || (letter == 'T')) {
                if (charVector[charVector.size() - 1] != '3') {
                    charVector.push_back('3');
                }
            } else if(letter == 'L') {
                if (charVector[charVector.size() - 1] != '4') {
                    charVector.push_back('4');
                }
            } else if ((letter == 'M') || (letter == 'N')) {
                if (charVector[charVector.size() - 1] != '5') {
                    charVector.push_back('5');
                }
            } else if (letter == 'R') {
                if (charVector[charVector.size()-1] != '6') {
                    charVector.push_back('6');
                }
            }
        } else {
            charVector.push_back('.');
        }
    }

    charVector.erase(charVector.begin() + 1);
    charVector.erase(std::remove(charVector.begin(), charVector.end(), '.'), charVector.end());

    while (charVector.size() <= 3) {
        charVector.push_back('0');
    }

    std::string soundIndex;
    for(int j = 0; j < 4; j++) {
        soundIndex += charVector[j];
    }

    std::string result;
    result = space;
    result += name;

    int resultLength = name.length();

    for(int j = 0; j < (35 - resultLength - 10); j++) {
        result += " ";
    }

    result += soundIndex;
    return result;
}

void printMiddleSpace(std::string word) {
    for(int i = word.length() + 10; i < 35; i++) {
        std::cout << " ";
    }
}

int main() {
    std::vector<std::string> outputVector;
    std::string name = "hello";
    std::string space = "         ";

    while(  std::cin >> name) {
        std::string soundex = calculateSoundex(name);
        outputVector.push_back(soundex);
    }

    std::cout << space << "NAME";
    printMiddleSpace("NAME");
    std::cout << "SOUNDEX CODE" << std::endl;
    for(std::string output : outputVector) {
        std::cout << output << std::endl;
    }
    std::cout << space << space << " END OF OUTPUT" << std::endl;

    return 0;
}