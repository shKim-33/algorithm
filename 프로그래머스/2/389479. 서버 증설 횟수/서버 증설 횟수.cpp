#include <vector>

using namespace std;

int solution(vector<int> players, int m, int k)
{
    int answer = 0;
    vector<pair<int, int>> server;
    int currentServer = 0;

    for (int i = 0; i < players.size(); ++i)
    {
        for (int j = 0; j < server.size(); ++j)
        {
            if (i - server[j].first == k)
                currentServer -= server[j].second;
        }

        if (int increased = (players[i] - currentServer * m) / m; increased > 0)
        {
            currentServer += increased;
            server.push_back({ i, increased });
            answer += increased;
        }
    }

    return answer;
}
