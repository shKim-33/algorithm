#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> pronouncing = { "aya", "ye", "woo", "ma" };

    for (auto str : babbling)
    {
        bool find = true;

        while (find)
        {
            find = false;

            for (int i = 0; i < pronouncing.size(); ++i)
            {
                if (auto r = ranges::search(str, pronouncing[i]))
                {
                    find = true;

                    size_t pos = r.begin() - str.begin();
                    size_t len = ranges::distance(r);

                    str = str.substr(0, pos) + to_string(i) + str.substr(pos + len, str.size());
                }
            }
        }

        if (ranges::any_of(str, [](char c) { return islower(c); }))
            continue;

        if (auto it = ranges::adjacent_find(str); it == str.end())
            answer++;
    }

    return answer;
}