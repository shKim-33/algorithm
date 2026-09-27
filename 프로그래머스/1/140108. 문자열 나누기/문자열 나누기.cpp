#include <string>

using namespace std;

int solution(string s) {
    int answer = 0, countX = 0, countNotX = 0;
    char x = s.front();

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == x)
            countX++;
        else
            countNotX++;

        if (countX == countNotX)
        {
            answer++;
            x = s[i + 1];
            countX = countNotX = 0;
        }
    }

    if (countX != countNotX)
        answer++;

    return answer;
}