#include <string>
#include <vector>

using namespace std;

string solution(string s, int n)
{
    string answer = "";

    for (char c : s)
    {
        unsigned char ch = ' ';

        if (isupper(c))
        {
            ch = c + n;
            if (ch - 'A' > 25) ch -= 26;
        }
        else if (islower(c))
        {
            ch = c + n;
            if (ch - 'a' > 25) ch -= 26;
        }

        answer.push_back(ch);
    }

    return answer;
}