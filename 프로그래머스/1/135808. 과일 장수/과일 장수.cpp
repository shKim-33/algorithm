#include <algorithm>
#include <vector>

using namespace std;

int solution(int k, int m, vector<int> score)
{
    int answer = 0;

    sort(score.begin(), score.end(), greater<>());

    for (int i = 0; i < score.size() / m; ++i)
        answer += score[(i + 1) * m - 1] * m;

    return answer;
}