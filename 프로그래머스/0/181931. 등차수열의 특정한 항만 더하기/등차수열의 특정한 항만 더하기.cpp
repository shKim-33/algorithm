#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;

    for (int i = 0; i < included.size(); ++i)
        included[i] == true ? answer += a + d * i : 0;

    return answer;
}