#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0, pow = 1;
    vector<int> invertedTernary;

    while (n != 0)
    {
        invertedTernary.push_back(n % 3);
        n /= 3;
    }

    for (int i = invertedTernary.size() - 1; i >= 0; --i)
    {
        answer += invertedTernary[i] * pow;
        pow *= 3;
    }

    return answer;
}