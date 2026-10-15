#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> stages)
{
    vector<int> answer, currentStage(N + 1, 0);
    vector<pair<double, int>> failureRate_perStage;

    for (int stage : stages)
        currentStage[stage - 1]++;

    for (int i = 0; i < N; ++i)
    {
        double sum = accumulate(currentStage.begin() + i, currentStage.end(), 0), failureRate = 0;

        if (sum == 0)
            failureRate = 0;
        else
            failureRate = static_cast<double>(currentStage[i]) / sum;

        failureRate_perStage.emplace_back(failureRate, i + 1);
    }

    sort(
        failureRate_perStage.begin(),
        failureRate_perStage.end(),
        [](const pair<double, int>& a, const pair<double, int>& b)
        {
            if (a.first != b.first)
                return a.first > b.first;
            return a.second < b.second;
        });

    for (auto& pair : failureRate_perStage)
        answer.push_back(pair.second);

    return answer;
}
