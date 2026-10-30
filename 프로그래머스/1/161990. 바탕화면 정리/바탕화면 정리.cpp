#include <climits>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper)
{
    vector<int> answer;
    vector<pair<int, int>> filePos;
    int lux = INT_MAX, luy = INT_MAX, rdx = 0, rdy = 0;

    for (int i = 0; i < wallpaper.size(); ++i)
    {
        for (int j = 0; j < wallpaper[i].size(); ++j)
        {
            if (wallpaper[i][j] == '#')
                filePos.emplace_back(i, j);
        }
    }

    for (auto pair : filePos)
    {
        if (pair.first < lux)
            lux = pair.first;

        if (pair.first + 1 > rdx)
            rdx = pair.first + 1;

        if (pair.second < luy)
            luy = pair.second;

        if (pair.second + 1 > rdy)
            rdy = pair.second + 1;
    }

    answer = { lux, luy, rdx, rdy };
    return answer;
}