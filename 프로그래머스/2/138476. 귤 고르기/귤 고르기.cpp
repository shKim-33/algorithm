#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;

int solution(int k, vector<int> tangerine)
{
    int answer = 0, sum = 0;
    unordered_map<int, int> tangerine_count;
    tangerine_count.reserve(tangerine.size());

    for (int size : tangerine)
        tangerine_count[size]++;

    vector<pair<int, int>> tangerine_sort(tangerine_count.begin(), tangerine_count.end());
    ranges::sort(tangerine_sort, greater{}, &pair<int, int>::second);

    for (auto& pair : tangerine_sort)
    {
        answer++;

        if (k > sum + pair.second)
            sum += pair.second;
        else
            break;
    }

    return answer;
}