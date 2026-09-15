#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "", sorted = "";

    for (int i = 1; i < food.size(); ++i)
    {
        for (int j = 0; j < food[i] / 2; ++j)
            sorted += to_string(i);
    }

    answer += sorted;
    answer += '0';
    ranges::reverse(sorted);
    answer += sorted;

    return answer;
}