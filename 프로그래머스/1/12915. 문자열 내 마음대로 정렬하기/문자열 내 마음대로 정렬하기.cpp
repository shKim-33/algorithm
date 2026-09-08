#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    vector<pair<char, string>> pair;

    for (auto& value : strings)
        pair.push_back({ value[n], value });

    sort(pair.begin(), pair.end());

    for (auto& p : pair)
        answer.push_back(p.second);

    return answer;
}