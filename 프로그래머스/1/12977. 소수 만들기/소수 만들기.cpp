#include <vector>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        for (int j = i + 1; j < nums.size(); ++j)
        {
            for (int k = j + 1; k < nums.size(); ++k)
            {
                int x = nums[i] + nums[j] + nums[k];
                bool isPrime = true;

                for (int d = 2; d * d <= x; ++d)
                {
                    if (x % d == 0)
                        isPrime = false;
                }

                if (isPrime)
                    answer++;
            }
        }
    }

    return answer;
}