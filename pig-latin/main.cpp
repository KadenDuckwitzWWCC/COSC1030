//
// Kaden Duckwitz
// 4/19/25
// Pig Latin Programming Project
// COSC 1030
//

#include <iostream>
#include <cstring>
#include <ctype.h>

char* convertToPigLatin(char *);

const int SENTENCE_SIZE = 100;

int main()
{
    char sentence[SENTENCE_SIZE];

    std::cout << "Please enter a sentence: ";
    std::cin.getline(sentence, SENTENCE_SIZE);

    char *pigLatinSentence = convertToPigLatin(sentence);

    std::cout << "Pig Latin translation: " << pigLatinSentence << std::endl;

    delete[] pigLatinSentence;

    return 0;
}

char* convertToPigLatin(char *sentence)
{
    char *pigLatinSentence = new char[SENTENCE_SIZE + 50];
    int index = 0;

    while (sentence[index] != '\0')
    {
        // Begin the iteration at the first non-whitespace character
        while (sentence[index] == ' ')
        {
            index++;
        }

        // Get the word at the current index
        char currentWord[50] = "";
        int wordLength = 0;
        int nextSpaceIndex = index;

        while (sentence[nextSpaceIndex] != ' ' && sentence[nextSpaceIndex] != '\0')
        {
            currentWord[wordLength] = sentence[nextSpaceIndex];

            wordLength++;
            nextSpaceIndex++;
        }

        // Append the first letter of the word to the end of the word
        currentWord[wordLength] = currentWord[0];
        wordLength++;

        // Null-terminate the current word
        currentWord[wordLength] = '\0';

        // Append "ay" to the end of the word
        std::strcat(currentWord, "ay");

        // Remove the first letter of the word
        for (int i = 1; i <= std::strlen(currentWord); i++)
        {
            currentWord[i - 1] = currentWord[i];
        }

        // Add the converted word to our final string
        std::strcat(currentWord, " ");
        std::strcat(pigLatinSentence, currentWord);

        // Set the index to the end of the current word
        index = nextSpaceIndex;
    }

    // Convert the string to all uppercase
    for (int i = 0; i < std::strlen(pigLatinSentence); i++)
    {
        pigLatinSentence[i] = toupper(pigLatinSentence[i]);
    }

    return pigLatinSentence;
}