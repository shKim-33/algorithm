#include <algorithm>
#include <string>
#include <vector>

using namespace std;

long long solution(long long n)
{
    long long answer = 0;
    string numToString = to_string(n);

    sort(numToString.begin(), numToString.end(), greater<>());
    answer = stoll(numToString);

    return answer;
}