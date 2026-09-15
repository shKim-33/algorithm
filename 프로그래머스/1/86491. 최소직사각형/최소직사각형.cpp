#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes)
{
    int answer = 0;

    int max[2] = { 0, 0 };

    for (auto& size : sizes)
    {
        if (size[0] < size[1])
        {
            int src = size[0];
            size[0] = size[1];
            size[1] = src;
        }

        if (size[0] > max[0])
            max[0] = size[0];
        if (size[1] > max[1])
            max[1] = size[1];
    }

    answer = max[0] * max[1];

    return answer;
}