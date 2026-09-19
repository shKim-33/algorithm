#include <string>
#include <vector>

using namespace std;

static void Recursive(const vector<int>& _number, int& _answer, int idx = 0, int count = 0, int sum = 0)
{
    if (count == 3)
    {
        _answer += (sum == 0 ? 1 : 0);
        return;
    }

    if (idx == _number.size())
        return;

    Recursive(_number, _answer, idx + 1, count + 1, sum + _number[idx]);
    Recursive(_number, _answer, idx + 1, count, sum);
}

int solution(vector<int> number)
{
    int answer = 0;
    Recursive(number, answer);
    return answer;
}