#include <unordered_set>
#include <vector>

using namespace std;

int solution(vector<int> nums) {
    int answer = 0;

    unordered_set<int> setNums(nums.begin(), nums.end());

    if (static_cast<int>(setNums.size()) < static_cast<int>(nums.size()) / 2)
        answer = static_cast<int>(setNums.size());
    else
        answer = static_cast<int>(nums.size()) / 2;

    return answer;
}