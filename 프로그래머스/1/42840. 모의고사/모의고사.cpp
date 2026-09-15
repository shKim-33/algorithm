#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers)
{
    vector<int> answer;

    int key1[5] = { 1, 2, 3, 4, 5 };
    int key2[8] = { 2, 1, 2, 3, 2, 4, 2, 5 };
    int key3[10] = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

    vector<int> supos = { 0, 0, 0 };

    for (int i = 0; i < answers.size(); ++i)
    {
        if (answers[i] == key1[i % 5])
            supos[0]++;

        if (answers[i] == key2[i % 8])
            supos[1]++;

        if (answers[i] == key3[i % 10])
            supos[2]++;
    }

    auto it = ranges::max_element(supos);

    for (int i = 0; i < supos.size(); ++i)
    {
        if (supos[i] == *it)
            answer.push_back(i + 1);
    }

    return answer;
}