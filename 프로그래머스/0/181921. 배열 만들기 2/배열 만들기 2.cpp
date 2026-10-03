#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r)
{
    vector<int> answer, num = { 5 };
    vector<string> stringNum = { "5" };

    for (int i = 0; i < stringNum.size(); ++i)
    {
        string s0 = stringNum[i] + "0";
        string s5 = stringNum[i] + "5";

        if (stoi(s0) > r)
            break;
        stringNum.push_back(s0);
        num.push_back(stoi(s0));

        if (stoi(s5) > r)
            break;
        stringNum.push_back(s5);
        num.push_back(stoi(s5));
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