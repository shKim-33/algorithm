#include <string>
#include <vector>

using namespace std;

int solution(string word)
{
    int answer = 0;

    string aeiou = "AEIOU";
    vector<int> wordToInt;
    vector<int> num = { 781, 156, 31, 6, 1 };

    for (int i = 0; i < word.size(); ++i)
    {
        size_t index = aeiou.find(word[i]);
        wordToInt.push_back(index);
    }

    for (int i = 0; i < wordToInt.size(); ++i)
        answer += wordToInt[i] * num[i] + 1;

    return answer;
}