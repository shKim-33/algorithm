#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r)
{
    vector<int> answer, num = { 5 };

    for (int i = 0; i < num.size(); ++i)
    {
        int s0 = num[i] * 10;

        if (s0 > r)
            break;
        num.push_back(s0);

        int s5 = s0 + 5;

        if (s5 > r)
            break;
        num.push_back(s5);
    }

    for (int n : num)
    {
        if (n >= l && n <= r)
            answer.push_back(n);
    }

    if (answer.empty())
        answer.push_back(-1);

    return answer;
}