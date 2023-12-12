/**
 *   @file: word-count.cc
 * @author: Hannah Culver
 *   @date: September 16, 2021
 *  @brief: homework 2 (word count)
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    string word;
    double word_count = 0;
    double sentence_count = 0;

    cout << "Please enter a paragraph, terminated by '@@@': ";

    cin >> word; // initialization
    int length;
    char letter;

    while (word != "@@@") // primary condition
    {
        word_count++; // update word count
        length = word.length();
        letter = word.at(length - 1);
        if (letter == '.' || letter == '!' || letter == '?') // secondary condition
        {
            sentence_count++; // update sentence count
        }
        cin >> word;
    }

    cout << "Word Count: " << word_count << endl;
    cout << "Sentence Count: " << sentence_count << endl;

    if (word_count > 0 && sentence_count > 0)
    {
        double average = word_count / sentence_count;
        cout << "Average words per sentence: " << fixed << setprecision(1) << average << endl;
    }
    else if (word_count == 0)
    {
        cout << "You did not enter any text!" << endl;
    }
    else if (sentence_count == 0)
    {
        cout << "You did not enter any sentences!" << endl;
    }
   return 0;
} /// main