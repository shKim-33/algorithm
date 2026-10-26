#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y)
{
    string answer = "";
    vector<int> countNum(10, 0);

    for (char numX : X)
        countNum[numX - '0']++;

    for (char numY : Y)
    {
        if (countNum[numY - '0'] > 0)
        {
            countNum[numY - '0']--;
            answer.push_back(numY);
        }
    }

    if (answer.empty())
    {
        answer = "-1";
        return answer;
    }

    if (*max_element(answer.begin(), answer.end()) == '0')
    {
        answer = "0";
        return answer;
    }

    sort(answer.begin(), answer.end(), greater<>());

    return answer;
}