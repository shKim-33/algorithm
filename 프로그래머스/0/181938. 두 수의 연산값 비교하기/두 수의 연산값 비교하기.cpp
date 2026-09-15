#include <string>
#include <vector>

using namespace std;

int solution(int a, int b)
{
    int answer = 0;

    string strAB = to_string(a) + to_string(b);

    if (stoi(strAB) >= 2 * a * b)
        answer = stoi(strAB);
    else
        answer = 2 * a * b;

    return answer;
}