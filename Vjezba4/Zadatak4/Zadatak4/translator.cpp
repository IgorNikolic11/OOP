#include "translator.h"

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void translate(string& word) {
    if (!word.empty() && !ispunct(word[0])) {
        if (isVowel(word[0])) {
            word += "-hay";
        }
        else {
            word += "-";
            while (!word.empty() && !isVowel(word[0])) {
                char firstChar = word[0];
                word.erase(0, 1);
                word += firstChar;
            }
            word += "ay";
        }
    }
}

void processSentence(const string& sentence, vector<string>& words) {
    string word;

    for (char c : sentence) {
        if (isspace(c)) {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        }
        else if (ispunct(c)) {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
            words.push_back(string(1, c));
        }
        else {
            word += c;
        }
    }

    if (!word.empty()) {
        words.push_back(word);
    }

    for (string& word : words) {
        translate(word);
    }
}
