#include <string>
#include <vector>
#include <algorithm>

using namespace std;

static int Solve_01(const vector<int>& _number)
{
    int _answer = 0;

    for (int i = 0; i < _number.size(); ++i)
    {
        for (int j = i + 1; j < _number.size(); ++j)
        {
            for (int k = j + 1; k < _number.size(); ++k)
            {
                if (_number[i] + _number[j] + _number[k] == 0)
                    _answer++;
            }
        }
    }

    return _answer;
}

static void Solve_02(const vector<int>& _number, int& _answer, int idx, int count, int sum)
{
    if (count == 3)
    {
        _answer += (sum == 0 ? 1 : 0);
        return;
    }

    if (idx == _number.size())
        return;

    Solve_02(_number, _answer, idx + 1, count + 1, sum + _number[idx]);
    Solve_02(_number, _answer, idx + 1, count, sum);
}

static int Solve_02_01(const vector<int>& _number, int idx, int count, int sum)
{
    if (count == 3)
        return sum == 0;

    if (idx == _number.size())
        return 0;

    return Solve_02_01(_number, idx + 1, count + 1, sum + _number[idx]) +
           Solve_02_01(_number, idx + 1, count, sum);
}

static int Solve_03(const vector<int>& _number)
{
    int _answer = 0;
    vector<int> check(_number.size(), 0);
    fill(check.end() - 3, check.end(), 1);

    do
    {
        int sum = 0;

        for (int i = 0; i < _number.size(); ++i)
        {
            if (check[i] == 1)
                sum += _number[i];
        }

        if (sum == 0)
            _answer++;
    }
    while (next_permutation(check.begin(), check.end()));

    return _answer;
}

int solution(vector<int> number)
{
    int answer = 0;

    //answer = Solve_01(number);
    //Solve_02(number,answer, 0, 0, 0);
    //answer = Solve_02_01(number, 0, 0, 0);
    answer = Solve_03(number);

    return answer;
}
