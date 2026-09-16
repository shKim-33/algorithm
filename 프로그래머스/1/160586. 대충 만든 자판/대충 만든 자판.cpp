#include <string>
#include <vector>
#include <climits>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;

    vector<int> counts(26, INT_MAX);

    for (auto& key : keymap)
    {
        for (int i = 0; i < key.size(); ++i)
        {
            if (counts[key[i] - 'A'] > i)
                counts[key[i] - 'A'] = i + 1;
        }
    }

    for (int i = 0; i < targets.size(); ++i)
    {
        int sum = 0;

        for (int j = 0; j < targets[i].size(); ++j)
        {
            if (counts[targets[i][j] - 'A'] != INT_MAX)
                sum += counts[targets[i][j] - 'A'];
            else if (counts[targets[i][j] - 'A'])
            {
                sum = -1;
                break;
            }
        }

        answer.push_back(sum);
    }

    return answer;
}