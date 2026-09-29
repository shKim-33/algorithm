#include <limits>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer = { 0, numeric_limits<int>::max() };
    int sum = sequence[0], left = 0, right = 0;

    while (!(right == static_cast<int>(sequence.size()) - 1 && sum < k))
    {
        if (sum < k)
        {
            right++;
            sum += sequence[right];
        }
        else
        {
            if (sum == k && right - left < answer[1] - answer[0])
                answer = { left, right };

            sum -= sequence[left];
            left++;
        }
    }

    return answer;
}
