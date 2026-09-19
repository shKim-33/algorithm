#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2)
{
    vector<string> answer;

    for (int i = 0; i < n; ++i)
    {
        int merged = arr1[i] | arr2[i];
        string row = "";

        for (int j = 0; j < n; ++j)
        {
            merged % 2 == 1 ? row += "#" : row += " ";
            merged /= 2;
        }

        ranges::reverse(row);
        answer.push_back(row);
    }

    return answer;
}
