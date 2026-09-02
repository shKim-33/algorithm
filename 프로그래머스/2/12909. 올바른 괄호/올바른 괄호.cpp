#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int count = 0;

    for (char c : s)
    {
        if (c == '(')
            count++;
        else if (c == ')')
            count--;

        if (count < 0)
            return false;
    }

    if (count == 0)
        answer = true;
    else
        answer = false;

    return answer;
}