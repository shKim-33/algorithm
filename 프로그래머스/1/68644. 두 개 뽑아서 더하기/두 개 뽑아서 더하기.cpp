#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;

    for (int i = 0; i < numbers.size() - 1; ++i)
    {
        for (int j = i + 1; j < numbers.size(); ++j)
            answer.push_back(numbers[i] + numbers[j]);
    }

    ranges::sort(answer);
    answer.erase(ranges::unique(answer).begin(), answer.end());

    return answer;
}