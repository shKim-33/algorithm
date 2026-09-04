#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer, sorted;

    for (auto& command : commands)
    {
        for (int i = command[0]; i <= command[1]; ++i)
            sorted.push_back(array[i - 1]);

        ranges::sort(sorted);
        answer.push_back(sorted[command[2] - 1]);
        sorted.clear();
    }

    return answer;
}