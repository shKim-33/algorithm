#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k)
{
    vector<int> answer = { 0, 0 };
    int start = 0, end = 0, length = 1000000;
    int sum = sequence[0];

    if (sum == k)
    {
        answer = { start, end };
        return answer;
    }

    while (!(end >= static_cast<int>(sequence.size()) - 1 && sum < k))
    {
        if (sum == k)
        {
            if (end - start < length)
            {
                length = end - start;
                answer = { start, end };
            }
        }

        if (sum <= k)
        {
            end++;
            sum += sequence[end];
        }
        else
        {
            sum -= sequence[start];
            start++;
        }
    }

    return answer;
}