#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> ingredient)
{
    int answer = 0;
    vector<int> packaging;
    vector<int> burger = { 1, 2, 3, 1 };

    for (int val : ingredient)
    {
        packaging.push_back(val);

        if (packaging.size() >= 4 &&
            equal(packaging.end() - 4, packaging.end(), burger.begin()))
        {
            for (int i = 0; i < 4; ++i)
                packaging.pop_back();

            answer++;
        }
    }

    return answer;
}