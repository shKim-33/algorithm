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
        for (int i = 0; i < 50; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                size_t index = str.find(pronouncing[j]);

                if (index != string::npos)
                {
                    str = str.substr(0, index) +
                          to_string(j) +
                          str.substr(index + pronouncing[j].size(), str.size());
                }
            }
        }

        if (all_of(str.begin(), str.end(), ::isdigit) &&
            string::npos == str.find("00") &&
            string::npos == str.find("11") &&
            string::npos == str.find("22") &&
            string::npos == str.find("33"))
            answer++;
    }

    return answer;
}