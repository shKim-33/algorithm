#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> d, int budget)
{
    int answer = 0;

    ranges::sort(d);

    for (int coast : d)
    {
        budget -= coast;

        if (budget >= 0)
            answer++;
    }

    return answer;
}