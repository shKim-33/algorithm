#include <functional>
#include <queue>
#include <vector>

using namespace std;

vector<int> solution(int k, vector<int> score)
{
    vector<int> answer;

    priority_queue<int, vector<int>, greater<int>> hallOfFame;

    for (int sc : score)
    {
        hallOfFame.push(sc);

        if (hallOfFame.size() > k)
            hallOfFame.pop();

        answer.push_back(hallOfFame.top());
    }

    return answer;
}