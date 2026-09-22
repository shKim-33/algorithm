#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int count = 0;

    for (char c : s)
    {
        if (isalpha(c))
        {
            if (count % 2 == 0)answer += toupper(c);
            else answer += tolower(c);
            count++;
        }
        else
        {
            answer += c;
            count = 0;
        }
    }

    return answer;
}
