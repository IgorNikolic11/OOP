#include "translator.h"

int main() {
    vector<string> sentences = {
        "What time is it?",
        "How are you?",
        "This is a test.",
    };

    srand(static_cast<unsigned int>(time(0)));

    int index = rand() % sentences.size();
    string selectedSentence = sentences[index];

    vector<string> words;
    processSentence(selectedSentence, words);

    cout << "Original sentence: " << selectedSentence << "\n";
    cout << "Translated sentence: ";
    for (const auto& word : words) {
        cout << word << " ";
    }

    return 0;
}
