#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount)
{
    int answer = 0;
    vector<int> itemCount(want.size(), 0);

    for (int i = 0; i < discount.size(); ++i)
    {
        auto it = find(want.begin(), want.end(), discount[i]);

        if (it != want.end())
            itemCount[it - want.begin()]++;

        if (i >= 10)
        {
            it = find(want.begin(), want.end(), discount[i - 10]);

            if (it != want.end())
                itemCount[it - want.begin()]--;
        }

        if (i >= 9)
        {
            bool canBuy = true;

            for (int j = 0; j < number.size(); ++j)
            {
                if (itemCount[j] < number[j])
                    canBuy = false;
            }

            if (canBuy)
                answer++;
        }
    }

    return answer;
}
