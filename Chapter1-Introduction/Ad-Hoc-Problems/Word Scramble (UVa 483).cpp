//
// Created by Stephen Ni on 2023-10-11.
//

// Link to the Problem: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=424

// read char by char left to right type problem

#include<iostream>
#include<string>
#include<vector>

int main() {
    std::string sentence;
    std::vector<std::string> wordVector;

    std::getline(std::cin, sentence);
    std::size_t numChars = sentence.length();

    std::string word;
    for(int i = 0; i < numChars; i++) {
        word += sentence[i];

        if ((sentence[i] == ' ') || (i == (numChars-1))) {
            word.pop_back();
            wordVector.push_back(word);
            word = "";
        }
    }

    std::size_t wordAmount = wordVector.size();
    for(int i = 0; i < wordAmount; i++) {
        std::string words = wordVector[i];
        std::size_t charLength = words.length();

        for(int j = 0; j < charLength; j++) {
            std::cout << words[charLength-j-1];
        }

        std::cout << " ";
    }

    return 0;
}