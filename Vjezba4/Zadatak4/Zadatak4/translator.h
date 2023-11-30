#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <iostream>
#include <vector>
#include <cctype>
#include <ctime>
#include <cstdlib>

using namespace std;

bool isVowel(char c);

void translate(string& word);

void processSentence(const string& sentence, vector<string>& words);

#endif
