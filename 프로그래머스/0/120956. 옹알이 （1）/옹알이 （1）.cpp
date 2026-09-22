#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling)
{
    int answer = 0;

    vector<string> pronouncing = { "aya", "ye", "woo", "ma" };

    for (auto str : babbling)
    {
        for (int i = 0; i < pronouncing.size(); ++i)
        {
            if (auto r = ranges::search(str, pronouncing[i]))
            {
                size_t pos = r.begin() - str.begin();
                size_t len = ranges::distance(r);

                str = str.substr(0, pos) + "?" + str.substr(pos + len, str.size());
            }
        }

        if (ranges::none_of(str, [](char c) { return islower(c); }))
            answer++;
    }

    return answer;
}