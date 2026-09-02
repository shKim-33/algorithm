#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;

    for (int i = 0; i < s.size(); ++i)
    {
        answer.push_back(-1);

        for (int j = 0; j < i; ++j)
        {
            if (s[i] == s[i - j - 1])
            {
                answer.pop_back();
                answer.push_back(j + 1);
                break;
            }
        }
    }

    return answer;
}