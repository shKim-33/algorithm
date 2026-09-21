#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string odd, even;

    for (int num : num_list)
    {
        if (num % 2 == 1)
            odd += to_string(num);
        else
            even += to_string(num);
    }

    return stoi(odd) + stoi(even);
}