#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    if (arr.size() < 2)
    {
        answer.push_back(-1);
        return answer;
    }

    auto it = ranges::min_element(arr);

    for (auto value : arr)
    {
        if (value != *it)
            answer.push_back(value);
    }

    return answer;
}
