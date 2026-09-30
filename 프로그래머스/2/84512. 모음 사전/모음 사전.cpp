#include <string>
#include <vector>

using namespace std;

vector<int> WordToInt(const string& str)
{
    vector<int> vec;
    string aeiou = "AEIOU";

    for (char c : str)
        vec.push_back(aeiou.find(c));

    return vec;
}

int solution(string word)
{
    int answer = 0;
    vector<int> wordToInt = WordToInt(word);

    for (int i = 0; i < wordToInt.size(); ++i)
    {
        if (i == 0) answer += wordToInt[i] * 781 + 1;
        else if (i == 1) answer += wordToInt[i] * 156 + 1;
        else if (i == 2) answer += wordToInt[i] * 31 + 1;
        else if (i == 3) answer += wordToInt[i] * 6 + 1;
        else answer += wordToInt[i] + 1;
    }

    return answer;
}
