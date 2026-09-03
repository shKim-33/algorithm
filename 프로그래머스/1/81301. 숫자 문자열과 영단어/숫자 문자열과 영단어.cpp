#include <string>
#include <unordered_map>

using namespace std;

int solution(string s) {
    string bufferStr, answerStr;

    unordered_map<string, char> wordToNum = {
        { "zero", '0' }, { "one", '1' }, { "two", '2' }, { "three", '3' }, { "four", '4' },
        { "five", '5' }, { "six", '6' }, { "seven", '7' }, { "eight", '8' }, { "nine", '9' }
    };

    for (char c : s)
    {
        if (isdigit(c))
            answerStr += c;
        else
            bufferStr += c;

        if (bufferStr.length() >= 3)
        {
            auto iter = wordToNum.find(bufferStr);
            if (iter != wordToNum.end())
            {
                answerStr += iter->second;
                bufferStr.clear();
            }
        }
    }

    return stoi(answerStr);
}