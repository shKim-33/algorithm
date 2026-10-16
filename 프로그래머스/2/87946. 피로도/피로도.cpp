#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int solution(int k, vector<vector<int>> dungeons)
{
    int answer = -1;
    vector<int> index(dungeons.size());
    iota(index.begin(), index.end(), 0);

    do
    {
        int curr_k = k, count = 0;

        for (int i : index)
        {
            if (curr_k >= dungeons[i][0])
            {
                count++;
                curr_k -= dungeons[i][1];
            }
        }

        answer = max(count, answer);
    }
    while (next_permutation(index.begin(), index.end()));

    return answer;
}