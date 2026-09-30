#include <climits>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
    vector<int> answer;

    for (auto& query : queries)
    {
        int min = INT_MAX;

        for (auto it = arr.begin() + query[0]; it <= arr.begin() + query[1]; ++it)
        {
            if (*it > query[2] && *it < min)
                min = *it;
        }

        if (min == INT_MAX)
            answer.push_back(-1);
        else
            answer.push_back(min);
    }

    return answer;
}